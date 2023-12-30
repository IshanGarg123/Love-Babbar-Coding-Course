// Linear search using Recursion

#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int n,int x)
{
    if(n==0)
    {
        return false;
    }

    if(arr[0]==x)
    {
        return true;
    }
    else{
        return LinearSearch(arr+1,n-1,x);
    }

}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout << LinearSearch(arr,9,0) << endl;
    return 0;
}