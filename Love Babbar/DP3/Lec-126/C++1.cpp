// Leetcode - 1218
// Longest Arithmetic Subsequence of Given Difference
// Tabulation
// T.C. = O(N)  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>
#include<unordered_map>

int longestSubsequence(vector<int> &arr, int difference)
{
    int n = arr.size();

    unordered_map<int, int> map;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int temp = arr[i] - difference;
        int cnt = 1;
        if (map.count(temp))
        {
            cnt += map[temp];
        }
        map[arr[i]] = cnt;
        ans = max(ans, cnt);
    }
    return ans;
}

int main()
{
    cout << "Longest Arithmetic Subsequence of Given Difference" << endl;
}