#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout << " ";
        }
        for(int k=1;k<=i;k++)
        {
            cout << k;
        }
        for(int l=1;l<i;l++)
        {
            cout << i-l;
        }
        cout << endl;
    }
    return 0;
}