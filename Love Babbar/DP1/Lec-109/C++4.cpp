// Coding Ninjas
// Ninja And The Fence
// BY Space Optimization
// T.C. = O(N) S.C = O(1);

#include<iostream> 
using namespace std;
#include<vector>
#define MOD 1000000007

int numberOfWays(int n, int k) {
    if(n==1)
    {
        return k;
    }
    long long a = k;
    long long b = k*k;
    long long c;

    for(int i=3;i<=n;i++)
    {
        c = (k-1)*(a+b)%MOD;
        a=b;
        b=c;
    }
    return b;
}

int main()
{
    cout << "Ninja And The Fence" << endl;
}
