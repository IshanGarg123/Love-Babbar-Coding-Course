#include<iostream>
using namespace std;

void printCount(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout << i << " ";
    }
}

bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    printCount(10);
    cout << endl;
    cout << isPrime(101) << endl;
    return 0;
}