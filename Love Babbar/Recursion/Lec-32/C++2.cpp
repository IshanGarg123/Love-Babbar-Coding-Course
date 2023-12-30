// Coding Ninjas
// Count Ways To Reach The N-th Stairs
// T.C. = O(N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <vector>

#define MOD 1000000007;

int countDistinctWays(int nStairs)
{
    if (nStairs == 0)
    {
        return 1;
    }
    else if (nStairs == 1)
    {
        return 1;
    }
    long long int a = 1;
    long long int b = 1;
    long long int c;

    for (int i = 2; i <= nStairs; i++)
    {
        c = (a + b) % MOD;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    cout << "Count Ways To Reach The N-th Stairs" << endl;
}