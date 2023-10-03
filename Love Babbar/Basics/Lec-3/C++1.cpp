#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        cout << i << " ";
        sum = sum + i;
    }
    cout << endl;
    cout << sum << endl;
    return 0;
}