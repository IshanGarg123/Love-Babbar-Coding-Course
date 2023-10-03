// Search in 2D Matrix
// leetcode 74
#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int s = 0;
    int e = row * col - 1;

    while (e >= s)
    {
        int mid = (e + s) / 2;
        int element = matrix[mid / col][mid % col];

        if (element == target)
        {
            return true;
        }
        else if (target > element)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return false;
}

int main()
{
    cout << "Search in 2D Matrix" << endl;
    return 0;
}