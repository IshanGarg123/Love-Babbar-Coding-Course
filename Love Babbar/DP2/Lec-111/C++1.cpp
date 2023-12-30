// Coding Ninjas
// Combination Sum IV
// Recursion
// T.C. = O(N^N) S.C=O(1); 

#include<iostream>
using namespace std;
#include<vector>

int findWays(vector<int> &num, int tar)
{
    if(tar == 0)
    {
        return 1;
    }
    if (tar < 0) {
        return 0;
    }

    int ans = 0;
    int temp;

    for(int i=0;i<num.size();i++)
    {
        temp = findWays(num,tar-num[i]);
        ans+=temp;
    }
    return ans;
}

int main()
{
    cout << "Combination Sum IV" << endl;
}