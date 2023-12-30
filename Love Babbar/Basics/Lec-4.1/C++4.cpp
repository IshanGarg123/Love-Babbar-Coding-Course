#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans =1;

    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout << " ";
        }
        for(int k=1;k<=i;k++)
        {
            cout << ans;
            ans++;
        }
        cout << endl;
    }
    return 0;
}