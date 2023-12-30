// Coding Ninjas
// Maximum sum of non-adjacent elements
// BY Recursion
// T.C. = O(2^N)

#include<iostream> 
using namespace std;
#include<vector>

int solve(vector<int> &nums,int n)
{
    if(n<0)
    {
        return 0;
    }
    else if(n==0)
    {
        return nums[0];
    }
    
    int incl = solve(nums,n-2) + nums[n];
    int excl = solve(nums,n-1);

    return max(incl,excl);
}



int maximumNonAdjacentSum(vector<int> &nums){
    return solve(nums,nums.size());
    // Write your code here.
}

int main()
{
    cout << "Maximum sum of non-adjacent elements" << endl;
}
