// larget row and col sum of the Array
#include<iostream>
using namespace std;

void largestRowSum(int arr[][3],int m,int n)
{
    int ans = -10000;
    int index = -1;
    for(int i=0;i<m;i++)
    {
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            sum = sum + arr[i][j];
        }
        if(sum > ans)
        {
            ans = sum;
            index = i;
        }
    }

    cout << "The sum of the largest row is " << ans << endl;
    cout << "index = " << index << endl;
}

void largestColSum(int arr[][3],int m,int n)
{
    int ans = -10000;
    int index = -1;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=0;j<m;j++)
        {
            sum = sum + arr[j][i];
        }
        if(sum > ans)
        {
            ans = sum;
            index = i;
        }
    }
    cout << "The sum of the largest col is " << ans << endl;
    cout << "index = " << index << endl;
}


int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    largestRowSum(arr,3,3);
    largestColSum(arr,3,3);
    return 0;
}