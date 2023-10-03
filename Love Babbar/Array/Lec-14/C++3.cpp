// Sqrt of a number with decimal places
#include<iostream>
using namespace std;

int sqrt(int n)
{
    int s=0;
    int e=n;
    int ans = -1;

    while(e>=s)
    {
        int mid=(s+e)/2;

        if(mid*mid == n)
        {
            return mid;
        }

        else if(mid*mid < n)
        {
            ans = mid;
            s=mid+1;
        }

        else
        {
            e=mid-1;
        }
    }
    return ans;
}

double morePrecision(int n,int precision,int tempSol)
{
    double factor = 1;
    double ans= tempSol;

    for(int i=0;i<precision;i++)
    {
        factor = factor/10;
        for(double j=ans;j*j<n;j=j+factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    cout << sqrt(39) << endl;
    double ans = morePrecision(101,5,6);
    cout << ans << endl;
    return 0;
}