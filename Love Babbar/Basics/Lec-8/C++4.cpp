#include<iostream>
using namespace std;

int fact(int n)
{
    int ans = 1;
    for(int i=1;i<=n;i++)
    {
        ans = ans*i;
    }
    return ans;
}

int nCr (int n,int r)
{
    int num = fact(n);
    int den = fact(n-r)*fact(r);

    return num/den;
}

int main()
{
    cout << fact(5) << endl;
    cout << nCr(5,2) << endl;
    return 0;
}