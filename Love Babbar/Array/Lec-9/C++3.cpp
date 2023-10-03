#include<iostream>
using namespace std;

void reverseArray(int arr[],int n)
{
    int s = 0;
    int e = n-1;

    while(e>s)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[100];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr,n);

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}