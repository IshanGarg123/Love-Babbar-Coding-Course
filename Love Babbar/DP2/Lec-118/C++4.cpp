// Leet Code 1402
// Reducing Dishes
// Space Optimization
// T.C. = O(N^2)  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <algorithm>

int maxSatisfaction(vector<int> &satisfaction)
{
    sort(satisfaction.begin(), satisfaction.end());

    int n = satisfaction.size();
    vector<int> next(n + 1, 0);
    vector<int> curr(n + 1, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            int incl = satisfaction[i] * (j + 1) + next[j + 1];
            int excl = next[j];

            curr[j] = max(incl, excl);
        }
        next = curr;
    }
    return next[0];
}

int main()
{
    cout << "Reducing Dishes" << endl;
}