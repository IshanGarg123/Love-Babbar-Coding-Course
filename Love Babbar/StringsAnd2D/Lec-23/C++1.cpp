// Linear Search in 2D Array
#include<iostream>
using namespace std;

void linearSearch(int arr[][3],int m,int n,int target)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j] == target)
            {
                cout << "The index of the element is " << i << " " << j;
                return;
            }
        }
    }
    cout << "The element in not in the 2D Array" << endl;
}

int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int target;
    cin >> target;
    linearSearch(arr,3,3,target);
    return 0;
}