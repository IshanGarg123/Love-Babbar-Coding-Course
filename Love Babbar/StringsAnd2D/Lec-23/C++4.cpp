// wave print of a 2D Matrix
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    // Write your code here
    for (int i = 0; i < mCols; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < nRows; j++)
            {
                ans.push_back(arr[j][i]);
            }
        }
        else
        {
            for (int j = nRows - 1; j >= 0; j--)
            {
                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}

int main()
{
    cout << "Wave Print of 2D Matrix" << endl;
    return 0;
}