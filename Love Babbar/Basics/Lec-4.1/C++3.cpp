#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<i;k++)
        {
            cout << " ";
        }
        for(int j=i;j<=n;j++)
        {
            cout << i;
        }
        cout << endl;
    }

    cout << endl;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout << " ";
        }
        for(int k=1;k<=i;k++)
        {
            cout << i;
        }
        cout << endl;
    }

    cout << endl;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout << " ";
        }
        for(int k=i;k<=n;k++)
        {
            cout << k;
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
