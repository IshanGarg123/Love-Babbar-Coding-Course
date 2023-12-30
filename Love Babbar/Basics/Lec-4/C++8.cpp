#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char ans ='A';

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout << char(ans+i-1) << " ";
        }
        cout << endl;
    }

    cout << endl;

    char ans1 = 'A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout << char(ans1+j-1) << " ";
        }
        cout << endl;
    }

    cout << endl;

    char ans2 = 'A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout << ans2 << " ";
            ans2++;
        }
        cout << endl;
    }

    return 0;
}