// Coding Ninjas
// Ninja And The Fence
// BY Recursion
// T.C. = O(2^N) S.C = O(1);

#include<iostream> 
using namespace std;
#include<limits.h>
#include<vector>
#define MOD 1000000007;

int numberOfWays(int n, int k) {
    // Write your code here.
    if(n==1)
    {
        return k;
    }
    if(n==2)
    {
        return k*k;
    }

    return (k-1)*(numberOfWays(n-2,k) + numberOfWays(n-1,k))%MOD; 
}

int main()
{
    cout << "Ninja And The Fence" << endl;
}
