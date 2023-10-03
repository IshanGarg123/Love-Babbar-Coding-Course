#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;

    while(e>=s)
    {
        int mid=(e+s)/2;
        // optimised formula for large s and e value;
        // so it not give error outofRange of int 
        // int mid = s + (e-s)/2;

        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int index = binarySearch(even,6,12);
    int index1 = binarySearch(odd,5,-1);

    cout << index << endl;
    cout << index1 << endl;
    return 0;
}