// Leet Code 1402
// Reducing Dishes
// Recursion + memorization
// T.C. = O(N^2)  S.C = O(N^2);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include<algorithm>

int solve(vector<int> &satisfaction, int index, int time)
{
    if (index == satisfaction.size())
    {
        return 0;
    }

    int incl = satisfaction[index] * time + solve(satisfaction, index + 1, time + 1);
    int excl = solve(satisfaction, index + 1, time);

    return max(incl, excl);
}

int maxSatisfaction(vector<int> &satisfaction)
{
    sort(satisfaction.begin(), satisfaction.end());
    return solve(satisfaction, 0, 1);
}

int main()
{
    cout << "Reducing Dishes" << endl;
}