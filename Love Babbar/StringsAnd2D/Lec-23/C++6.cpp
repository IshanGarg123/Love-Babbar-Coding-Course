// Rotate Image
// leetCode 48
#include<iostream>
using namespace std;
#include<vector>

void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = n-1;

        while(top<bottom)
        {
            for(int i=top;i<right;i++)
            {
                swap(matrix[top][i],matrix[i][right]);
                swap(matrix[bottom][n-i-1],matrix[n-i-1][left]);
                swap(matrix[top][i],matrix[bottom][n-i-1]);
            }
            top++;
            bottom--;
            left++;
            right--;
        }
    }

int main()
{
    cout << "Rotate Image in 2D Array" << endl;
    return 0;
}