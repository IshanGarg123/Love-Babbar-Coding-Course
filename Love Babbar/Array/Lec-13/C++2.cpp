// peak element in an array
#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int s = 0;
    int e = arr.size()-1;

    while(e>s)
    {
        int mid = (s+e)/2;
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
    return s;
}

int main()
{
    cout << "Peak Index in the Mountain Array" << endl;
    return 0;
}