#include <iostream>
#include <stack>
#include<vector>
using namespace std;
// Largest Area in a Histogram
// Leet Code 84

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

int main()
{
    cout << "Largest Area in a Histogram"<< endl;
    return 0;
}