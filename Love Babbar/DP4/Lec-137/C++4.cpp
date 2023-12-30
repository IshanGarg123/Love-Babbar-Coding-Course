// Leetcode - 72
// Edit Distance
// Space Optimization
// T.C. = O(N^2)  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

int minDistance(string word1, string word2)
{
    int n = word1.length();
    int m = word2.length();
    if (n == 0)
    {
        return m;
    }
    if (m == 0)
    {
        return n;
    }

    vector<int> next(m + 1, 0);
    vector<int> curr(m + 1, 0);

    for (int j = 0; j <= m; j++)
    {
        next[j] = m - j;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        curr[m] = n - i;
        for (int j = m - 1; j >= 0; j--)
        {

            int ans = 0;
            if (word1[i] == word2[j])
            {
                ans = next[j + 1];
            }
            else
            {
                int insertkaro = 1 + curr[j + 1];
                int deletekaro = 1 + next[j];
                int replacekaro = 1 + next[j + 1];

                ans = min(insertkaro, min(deletekaro, replacekaro));
            }
            curr[j] = ans;
        }
        next = curr;
    }
    return curr[0];
}

int main()
{
    cout << "Edit Distance" << endl;
}