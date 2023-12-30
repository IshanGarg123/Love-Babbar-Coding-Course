// Coding Ninjas
// Minimum Elements
// BY Recursion
// T.C. = O(K^N)

#include<iostream> 
using namespace std;
#include<vector>



/*
int solve(vector<int> &nums,int x)
{
    if(x == 0)
    {
        return 0;
    } 
    else if (x < 0) {
        return INT_MAX;
    }

    int mini = INT_MAX;

    for(int i=0;i<nums.size();i++)
    {
        int ans = solve(nums,x-nums[i]);
        if(ans!=INT_MAX && ans<mini)
        {
            mini = ans+1;
        }
    }
    return mini;
}

int minimumElements(vector<int> &num, int x)
{
    int ans = solve(num,x);
    if(ans == INT_MAX)
    {
        return -1;
    }
    return ans;
}

*/

int main()
{
    cout << "Minimum Elements"  << endl;
}