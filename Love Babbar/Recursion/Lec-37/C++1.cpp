// Coding Ninjas
// FindAllSubsets
#include <iostream>
using namespace std;
#include<vector>

void solve(vector<int> &arr,int index,vector<vector<int>>&ans,
vector<int>&temp)
{
    if(index == arr.size())
    {
        ans.push_back(temp);
        return;
    }

    temp.push_back(arr[index]);
    solve(arr,index+1,ans,temp);
    temp.pop_back();
    solve(arr,index+1,ans,temp);
}

vector<vector<int>> FindAllSubsets(vector<int> &arr){
    vector<vector<int>> ans;
    vector<int> temp;
    solve(arr,0,ans,temp);
    return ans;
}
int main()
{
    cout << "FindAllSubsets" << endl;
}