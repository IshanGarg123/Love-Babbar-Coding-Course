// Sum of the Array
#include<iostream>
using namespace std;

int sumOfArray(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }

    return arr[0] + sumOfArray(arr+1,n-1);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout << sumOfArray(arr,9) << endl;
    return 0;
}