// Check if Array is Sorted and Rotated
#include <iostream>
using namespace std;
#include <vector>

bool check(vector<int> &nums)
{
    int len = nums.size();
    int count = 0;

    for (int i = 1; i < len; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
    }

    if (nums[len - 1] > nums[0])
    {
        count++;
    }

    if (count <= 1)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << "Check if Array is Sorted and Rotated" << endl;
    return 0;
}