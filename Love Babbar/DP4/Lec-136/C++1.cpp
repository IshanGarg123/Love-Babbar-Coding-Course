// Leetcode - 516
// Longest Palindromic Subsequence
// Space Optimization
// T.C. = O(N^2)  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>
int longestPalindromeSubseq(string s)
{
    int n = s.length();
    string rev = "";
    for (int i = n - 1; i >= 0; i--)
    {
        rev = rev + s[i];
    }

    vector<int> next(n + 1, 0);
    vector<int> curr(n + 1, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            int ans = 0;
            if (s[i] == rev[j])
            {
                ans = 1 + next[j + 1];
            }
            else
            {
                ans = max(next[j], curr[j + 1]);
            }
            curr[j] = ans;
        }
        next = curr;
    }
    return curr[0];
}

int main()
{
    cout << "Longest Palindromic Subsequence" << endl;
}