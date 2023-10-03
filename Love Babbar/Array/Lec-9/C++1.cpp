#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int maxElement(int arr[],int n)
{
    int maxi = INT32_MIN;

    for(int i=0;i<n;i++)
    {
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}

int minElement(int arr[],int n)
{
    int mini = INT32_MAX;
    for(int i=0;i<n;i++)
    {
        mini = min(mini,arr[i]);
    }
    return mini;
}

int sum(int arr[],int n)
{
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        ans = ans + arr[i];
    }
    return ans;
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

    cout << maxElement(arr,n) << endl;
    cout << minElement(arr,n) << endl;
    cout << sum(arr,n) << endl;

    return 0;
}