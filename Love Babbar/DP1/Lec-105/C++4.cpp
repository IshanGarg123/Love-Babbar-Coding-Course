// Coding Ninjas
// Maximum sum of non-adjacent elements
// BY Space Optimization
// T.C. = O(N) S.C = O(1);

#include<iostream> 
using namespace std;
#include<vector>

int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n = nums.size();
    int a = 0;
    int b = nums[0];
    int c;

    for(int i=1;i<n;i++)
    {
        c = max(a+nums[i],b);
        a=b;
        b=c;
    }
}

int main()
{
    cout << "Maximum sum of non-adjacent elements" << endl;
}
