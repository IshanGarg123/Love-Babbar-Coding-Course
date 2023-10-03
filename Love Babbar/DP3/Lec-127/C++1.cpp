// Leetcode - 96
// Unique Binary Search Trees
// Tabulation
// T.C. = O(2^N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int numTrees(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += numTrees(i - 1) * numTrees(n - i);
    }
    return ans;
}

int main()
{
    cout << "Unique Binary Search Trees" << endl;
}