#include <iostream>
using namespace std;
#include<stack>
#include <vector>
// Maximal Rectangle
// Leet Code 85


void nextSmallerElementIndex(vector<int> &height, int n, vector<int> &nextIndex)
{
    stack<int> stk;
    stk.push(-1);

    for (int i = n - 1; i >= 0; i--)
    {
        int temp = height[i];
        while (stk.top() != -1 && temp <= height[stk.top()])
        {
            stk.pop();
        }
        nextIndex[i] = stk.top();
        stk.push(i);
    }
}

void prevSmallerElementIndex(vector<int> &height, int n, vector<int> &prevIndex)
{
    stack<int> stk;
    stk.push(-1);

    for (int i = 0; i < n; i++)
    {
        int temp = height[i];
        while (stk.top() != -1 && temp <= height[stk.top()])
        {
            stk.pop();
        }
        prevIndex[i] = stk.top();
        stk.push(i);
    }
}

int largestRectangleArea(vector<int> &heights)
{
    int n = heights.size();
    vector<int> nextIndex(n);
    vector<int> prevIndex(n);

    nextSmallerElementIndex(heights, n, nextIndex);
    prevSmallerElementIndex(heights, n, prevIndex);

    /*for(int i=0;i<n;i++)
    {
        cout << nextIndex[i] << " "<<prevIndex[i] << endl;
    }*/

    int ans = 0;
    int area = 0;

    for (int i = 0; i < n; i++)
    {
        if (nextIndex[i] == -1)
        {
            nextIndex[i] = n;
        }

        area = (nextIndex[i] - prevIndex[i] - 1) * heights[i];

        if (area > ans)
        {
            ans = area;
        }
    }
    return ans;
}

int maximalRectangle(vector<vector<char>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> matrix1(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == '0')
            {
                matrix1[i][j] = 0;
            }
            else
            {
                matrix1[i][j] = 1;
            }
        }
    }

    int ans = largestRectangleArea(matrix1[0]);
    int temp;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix1[i][j] != 0)
            {
                matrix1[i][j] = matrix1[i - 1][j] + matrix1[i][j];
            }
            // cout << matrix1[i][j] << " ";
        }
        // cout << endl;
        temp = largestRectangleArea(matrix1[i]);
        cout << temp << endl;
        if (temp > ans)
        {
            ans = temp;
        }
    }
    return ans;
}

int main()
{
    cout << "Maximal Rectangle" << endl;
    return 0;
}