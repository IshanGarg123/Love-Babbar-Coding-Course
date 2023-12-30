// Leet Code 300
// Longest Increasing Subseq
// space optimization
// T.C. = O(NLogN)  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int binarySearch(vector<int> &ans, int s, int e, int key)
{
    int mid;
    while (e >= s)
    {
        mid = (s + e) / 2;
        if (ans[mid] == key)
        {
            return mid;
        }
        else if (ans[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return s;
}

int longestSubsequence(int n, int a[])
{
    vector<int> ans(n);
    ans[0] = a[0];
    int index = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > ans[index])
        {
            ans[index + 1] = a[i];
            index++;
        }
        else
        {
            int temp = binarySearch(ans, 0, index, a[i]);
            ans[temp] = a[i];
        }
    }
    return index + 1;
}

int main()
{
    cout << "Longest Increasing Subsequence" << endl;
}