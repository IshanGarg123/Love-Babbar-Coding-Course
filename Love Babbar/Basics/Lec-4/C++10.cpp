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
            cout << char(ans+i-1) << " ";
        }
        cout << endl;
    }

    cout << endl;

    char ans1 = 'A';

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << ans1 << " ";
            ans1++;
        }
        cout << endl;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << char(ans+i+j-2) << " ";
        }
        cout << endl;
    }
    return 0;
}