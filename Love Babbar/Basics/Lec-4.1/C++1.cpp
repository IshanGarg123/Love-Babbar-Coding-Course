#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ans = 'A';

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << char(ans+n-i+j-1) << " ";
        }
        cout << endl;
    }
    return 0;
}