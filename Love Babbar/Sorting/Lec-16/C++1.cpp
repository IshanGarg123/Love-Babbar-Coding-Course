// selection sort
#include<iostream>
using namespace std;
#include <bits/stdc++.h> 


void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=0;i<n-1;i++)
    {
        int min = arr[i];
        int index = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min = arr[j];
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }
}

int main()
{
    cout << "Selection Sort of an Array" << endl;
    return 0;
}