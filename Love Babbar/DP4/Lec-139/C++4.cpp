// Leetcode - 44
// Wildcard Matching
// Space Optimization
// T.C. = O(N*M)  S.C = O(M)

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

bool isMatch(string s, string p)
{
    int len1 = s.length();
    int len2 = p.length();
    vector<int> prev(len2 + 1, 0);
    vector<int> curr(len2 + 1, 0);

    prev[0] = true;

    for (int j = 1; j <= len2; j++)
    {
        bool flag = true;
        for (int k = 1; k <= j; k++)
        {
            if (p[k - 1] != '*')
            {
                flag = false;
                break;
            }
        }
        prev[j] = flag;
    }

    for (int i = 1; i <= len1; i++)
    {
        for (int j = 1; j <= len2; j++)
        {
            int ans;
            if (s[i - 1] == p[j - 1] || p[j - 1] == '?')
            {
                ans = prev[j - 1];
            }
            else if (p[j - 1] == '*')
            {
                ans = (prev[j] || curr[j - 1]);
            }
            else
            {
                ans = false;
            }
            curr[j] = ans;
        }
        prev = curr;
    }
    return prev[len2];
}

int main()
{
    cout << "Wildcard Matching" << endl;
}