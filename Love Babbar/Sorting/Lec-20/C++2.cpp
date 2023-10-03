// merge 2 sorted Arrays
#include<iostream>
using namespace std;
#include<vector>

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=m-1;
    int j=n-1;
    int k=m+n-1;

    while(i>=0 && j>=0)
    {
        if(nums1[i]<nums2[j])
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
        else
        {
            nums1[k] = nums1[i];
            k--;
            i--;
        }
    }
    while(i>=0)
    {
        nums1[k] = nums1[i];
        k--;
        i--;    
    }
    while(j>=0)
    {
        nums1[k] = nums2[j];
        k--;
        j--;
    }
}

int main()
{
    cout << "Merge 2 Sorted Arrays" << endl;
}