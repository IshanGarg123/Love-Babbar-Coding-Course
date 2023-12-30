#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n>=100)
    {
        cout << "100 notes = " << n/100 << endl;
        n=n%100;
    }
    if(n>=50)
    {
        cout << "50 notes = " << n/50 << endl;
        n=n%50;
    }
    if(n>=20)
    {
        cout << "20 notes = " << n/20 << endl;
        n=n%20;
    }
    if(n>=10)
    {
        cout << "10 notes = " << n/10 << endl;
        n=n%10;
    }
    if(n>=1)
    {
        cout << "1 notes = " << n/1 << endl;
    }
    return 0;
}