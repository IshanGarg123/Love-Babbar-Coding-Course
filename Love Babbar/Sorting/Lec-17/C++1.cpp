// Bubble Sort
#include<iostream>
using namespace std;
#include <bits/stdc++.h> 

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++)
    {
        bool swapped = false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
    }
}

int main()
{
    cout << "Bubble Sort to sort a Array" << endl;
    return 0;
}