// Leetcode - 72
// Edit Distance
// Recursion
// T.C. = O(2^N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

int solve(string word1, string word2, int i, int j)
{
    if (i == word1.length())
    {
        return word2.length() - j;
    }
    if (j == word2.length())
    {
        return word1.length() - i;
    }

    if (word1[i] == word2[j])
    {
        return solve(word1, word2, i + 1, j + 1);
    }
    else
    {
        int insertkaro = 1 + solve(word1, word2, i, j + 1);
        int deletekaro = 1 + solve(word1, word2, i + 1, j);
        int replacekaro = 1 + solve(word1, word2, i + 1, j + 1);

        return min(insertkaro, min(deletekaro, replacekaro));
    }
}

int minDistance(string word1, string word2)
{
    return solve(word1, word2, 0, 0);
}

int main()
{
    cout << "Edit Distance" << endl;
}