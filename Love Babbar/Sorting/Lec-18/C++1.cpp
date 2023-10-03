// insertion sort
#include<iostream>
using namespace std;

#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i=1;i<n;i++)
    {
        int temp = arr[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main()
{
    cout << "Insertion Sort to sort an Array" << endl;
    return 0;
}