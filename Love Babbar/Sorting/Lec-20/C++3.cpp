// Move zeroes
#include<iostream>
using namespace std;
#include<vector>

void moveZeroes(vector<int>& nums) {
    int i=0;
    for(int j=0;j<nums.size();j++)
    {
        if(nums[j]!=0)
        {
            swap(nums[i],nums[j]);
            i++;
        }
    }
}

int main()
{
    cout << "Move Zeroes" << endl;
    return 0;
}