// Spiral Matrix
// LeetCode 54
#include<iostream>
using namespace std;
#include<vector>

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        int total = row*col;
        int count = 0;

        int top = 0;
        int right = col-1;
        int left = 0;
        int bottom = row-1;

        vector<int> ans;

        while(count < total)
        {
            for(int i=left;count<total && i<=right;i++)
            {
                ans.push_back(matrix[top][i]);
                count++;
            }
            top++;

            for(int i=top;count<total && i<=bottom;i++)
            {
                ans.push_back(matrix[i][right]);
                count++;
            }
            right--;

            for(int i=right;count<total && i>=left;i--)
            {
                ans.push_back(matrix[bottom][i]);
                count++;
            }
            bottom--;

            for(int i=bottom;count<total && i>=top;i--)
            {
                ans.push_back(matrix[i][left]);
                count++;
            }
            left++;
        }
        return ans;
    }

int main()
{
    cout << "Spiral Path" << endl;
    return 0;
}