// isSorted Array by recursion
#include<iostream>
using namespace std;

bool isSorted(int arr[],int n)
{
    if(n==0 || n==1)
    {
        return true;
    }

    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        return isSorted(arr+1,n-1);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,0};
    cout << isSorted(arr,9) << endl;
    return 0;
}