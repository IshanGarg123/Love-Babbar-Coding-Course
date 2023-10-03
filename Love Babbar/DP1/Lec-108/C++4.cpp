// Coding Ninjas
// Count derangements
// BY Space Optimization
// T.C. = O(N) S.C = O(1);

#include<iostream> 
using namespace std;
#include<limits.h>
#include<vector>
#define MOD 1000000007


long long int countDerangements(int n) {
    // Write your code here.
    if(n==1)
    {
        return 0;
    }
    
    long long int a = 0;
    long long int b = 1;
    long long int c;

    for(int i=3;i<=n;i++)
    {
        c = (i-1)*(a+b)%MOD;
        a=b;
        b=c;
    }

    return b;
}

int main()
{
    cout << "Count derangements" << endl;
}
