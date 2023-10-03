#include<iostream>
using namespace std;

/*

    
    void heapify(vector<int> &ans, int n , int i)
    {
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;
        
        if(left<n && ans[left]>ans[largest])
        {
            largest = left;
        }
        if(right<n && ans[right]>ans[largest])
        {
            largest = right;
        }
        
        if(largest!=i)
        {
            swap(ans[largest],ans[i]);
            heapify(ans,n,largest);
        }
    }
    
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int> ans = a;
        for(int i=0;i<b.size();i++)
        {
            ans.push_back(b[i]);
        }
        
        for(int i=ans.size()/2 - 1 ;i>=0 ;i--)
        {
            heapify(ans,ans.size(),i);
        }
        return ans;
    }
*/

int main()
{
    cout << "Merge 2 heaps into a Single heap" << endl;
}