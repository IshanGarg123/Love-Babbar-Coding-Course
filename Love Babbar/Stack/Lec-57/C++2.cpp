#include<iostream>
#include<stack>
using namespace std;

void matrix(int arr[][4],int m,int n)
{
    for(int i=1;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=0)
            {
                arr[i][j] = arr[i][j] + arr[i-1][j];
            }
        }
    }
}

int main()
{
    int arr[4][4] ={{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};
    matrix(arr,4,4);

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}