#include<iostream>
using namespace std;

bool linearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
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

    int x;
    cin >> x;

    cout << linearSearch(arr,n,x) << endl;

    return 0;
}