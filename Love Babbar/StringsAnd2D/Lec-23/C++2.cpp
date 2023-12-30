// row-wise and col-wise sum of the Array
#include<iostream>
using namespace std;

void rowSum(int arr[][3],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void colSum(int arr[][3],int m,int n)
{
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=0;j<m;j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
    }
    cout << endl;
}


int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    rowSum(arr,3,3);
    colSum(arr,3,3);
    return 0;
}