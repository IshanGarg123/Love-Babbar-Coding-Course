#include<iostream>
using namespace std;

int AP(int n)
{
    int ans = 7;
    for(int i=1;i<=n;i++)
    {
        ans = ans + 3;
    }
    return ans;
}

int main()
{
    cout << AP(3);
    return 0;
}