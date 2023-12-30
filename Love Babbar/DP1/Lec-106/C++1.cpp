// Coding Ninjas
// House Robber II
// BY Space Optimization
// T.C. = O(N) S.C = O(1);

#include<iostream> 
using namespace std;
#include<vector>

long long solve(vector<int>& valueInHouse,int n)
{
    long long a = valueInHouse[0];
    long long b = max(valueInHouse[0],valueInHouse[1]);
    long long c;

    for(int i=2;i<n;i++)
    {
        c = max(a+valueInHouse[i],b);
        a = b;
        b = c;
    }
    return b;
}

long long int houseRobber(vector<int>& valueInHouse)
{
    int n = valueInHouse.size();
    
    if(n==1)
    {
        return valueInHouse[0];
    }

    vector<int> arr1,arr2;

    for(int i=0;i<n-1;i++)
    {
        arr1.push_back(valueInHouse[i]);
        arr2.push_back(valueInHouse[i+1]);
    }

    return max(solve(arr1,n-1),solve(arr2,n-1));

}


int main()
{
    cout << "House Robber II" << endl;
}
