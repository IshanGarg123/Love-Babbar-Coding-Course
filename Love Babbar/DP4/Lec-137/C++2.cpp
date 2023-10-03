// Leetcode - 72
// Edit Distance
// Recursion + memorization
// T.C. = O(N*M)  S.C = O(N*M)

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

int solve(string word1, string word2, int i, int j, vector<vector<int>> &dp)
{
    if (i == word1.length())
    {
        return word2.length() - j;
    }
    if (j == word2.length())
    {
        return word1.length() - i;
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    int ans = 0;

    if (word1[i] == word2[j])
    {
        ans = solve(word1, word2, i + 1, j + 1, dp);
    }
    else
    {
        int insertkaro = 1 + solve(word1, word2, i, j + 1, dp);
        int deletekaro = 1 + solve(word1, word2, i + 1, j, dp);
        int replacekaro = 1 + solve(word1, word2, i + 1, j + 1, dp);

        ans = min(insertkaro, min(deletekaro, replacekaro));
    }
    dp[i][j] = ans;
    return ans;
}

int minDistance(string word1, string word2)
{
    int n = word1.length();
    int m = word2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    return solve(word1, word2, 0, 0, dp);
}

int main()
{
    cout << "Edit Distance" << endl;
}