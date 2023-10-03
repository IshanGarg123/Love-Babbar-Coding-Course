// GFG
// Get Minimum Squares
// Recursion
// T.C. = O(N^N)  S.C = O(1);

#include <iostream>
using namespace std;
#include<limits.h>
#include <vector>

int MinSquares(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int ans = INT_MAX;
    int temp;

    for (int i = 1; i * i <= n; i++)
    {
        temp = MinSquares(n - (i * i));
        if (temp < ans)
        {
            ans = temp;
        }
    }
    return ans + 1;
}

int main()
{
    cout << "Get Minimum Squares" << endl;
}