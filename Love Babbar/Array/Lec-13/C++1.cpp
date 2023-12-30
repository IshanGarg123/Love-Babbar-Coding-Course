// First and last Occurace of element in a sorted Array
#include <bits/stdc++.h> 
#include<vector>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int s = 0;
    int e = n-1;

    int ans1 = -1;

    while(e>=s)
    {
        int mid = (s+e)/2;

        if(arr[mid]==k)
        {
            ans1 = mid;
            e=mid-1;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    s=0;
    e=n-1;
    
    int ans2 = -1;

    while(e>=s)
    {
        int mid = (s+e)/2;

        if(arr[mid]==k)
        {
            ans2 = mid;
            s=mid+1;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    pair<int,int> ans;
    ans.first = ans1;
    ans.second = ans2;

    return ans;
}

int main()
{
    cout << "First and last Occurace of element in a sorted Array" << endl;
}