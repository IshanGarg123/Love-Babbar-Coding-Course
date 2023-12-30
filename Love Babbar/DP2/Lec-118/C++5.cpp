// Leet Code 1402
// Reducing Dishes
// Space Optimization
// T.C. = O(N^2)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <algorithm>

int maxSatisfaction(vector<int> &satisfaction)
{
    sort(satisfaction.begin(), satisfaction.end());
    int ans = 0;

    for (int i = 0; i < satisfaction.size(); i++)
    {
        int temp = 0;
        int time = 1;
        for (int j = i; j < satisfaction.size(); j++)
        {
            temp += satisfaction[j] * time;
            time++;
        }
        ans = max(temp, ans);
    }
    return ans;
}

int main()
{
    cout << "Reducing Dishes" << endl;
}