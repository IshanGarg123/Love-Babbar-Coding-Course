// Aggressive Cow problem

#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;


bool isPossible(vector<int> &stalls, int k,int mid)
{
    int cowCount = 1;
    int lastpos = stalls[0];

    for(int i=0;i<stalls.size();i++)
    {
        if(stalls[i]-lastpos >= mid)
        {
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastpos = stalls[i];
        }   
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    
    int s=0;
    int maxi = -1;
    for(int i=0;i<stalls.size();i++)
    {
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi;

    int ans = -1;

    while(s<=e)
    {
        int mid=(s+e)/2;

        if(isPossible(stalls,k,mid))
        {
            ans = mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}

int main()
{
    cout << "Aggressive Cows Problem" << endl;
}