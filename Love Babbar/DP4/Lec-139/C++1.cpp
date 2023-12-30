// Leetcode - 44
// Wildcard Matching
// Recursion
// T.C. = O(2^N)  S.C = O(1)

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

bool solve(string &s, string &p, int i, int j)
{
    if (i < 0 && j < 0)
    {
        return true;
    }
    if (i >= 0 && j < 0)
    {
        return false;
    }
    if (i < 0 && j >= 0)
    {
        for (int k = 0; k <= j; k++)
        {
            if (p[k] != '*')
            {
                return false;
            }
        }
        return true;
    }

    if (s[i] == p[j] || p[j] == '?')
    {
        return solve(s, p, i - 1, j - 1);
    }
    else if (p[j] == '*')
    {
        return (solve(s, p, i - 1, j) || solve(s, p, i, j - 1));
    }
    else
    {
        return false;
    }
}

bool isMatch(string s, string p)
{
    int len1 = s.length();
    int len2 = p.length();
    return solve(s, p, len1 - 1, len2 - 1);
}

int main()
{
    cout << "Wildcard Matching" << endl;
}