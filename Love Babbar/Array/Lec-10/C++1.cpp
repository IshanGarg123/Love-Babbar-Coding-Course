#include<iostream>
using namespace std;

void alternateReverse(int arr[],int n)
{
    for(int i=0;i<n-1;i=i+2)
    {
        swap(arr[i],arr[i+1]);
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    printArray(arr,n);
    alternateReverse(arr,n);
    printArray(arr,n);
    return 0;
}