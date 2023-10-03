// getPivot
#include<iostream>
using namespace std;

int getPivot(int arr[],int n)
{
    int s=0;
    int e=n-1;

    while(e>s)
    {
        int mid=(s+e)/2;
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
    return s;
}

int main()
{
    int arr[5] = {7,9,1,2,3};
    int ans = getPivot(arr,5);
    cout << ans << endl;
    return 0;
}