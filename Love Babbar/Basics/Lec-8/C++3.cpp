#include<iostream>
using namespace std;

int power(int a,int b)
{
    int ans = 1;
    for(int i=0;i<b;i++)
    {
        ans = ans*a;
    }
    return ans;
}

bool isEven(int n)
{
    if(n%2==0)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << power(2,5) << endl;
    cout << isEven(10) << endl;
    cout << isEven(3) << endl;
    return 0;
}