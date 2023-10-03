#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ans = 'A';
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout << char(ans+i+j-2) << " ";
        }
        cout << endl;
    }
    return 0;
}