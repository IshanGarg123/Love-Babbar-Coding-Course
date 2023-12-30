// Leetcode - 375
// Guess Number Higher or Lower II
// Recursion
// T.C. = O(2^N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int solve(int s, int e)
{
    if (s >= e)
    {
        return 0;
    }

    int ans = INT_MAX;
    for (int i = s; i <= e; i++)
    {
        ans = min(ans, i + max(solve(s, i - 1), solve(i + 1, e)));
    }
    return ans;
}

int getMoneyAmount(int n)
{
    return solve(1, n);
}

int main()
{
    cout << "Guess Number Higher or Lower II" << endl;
}