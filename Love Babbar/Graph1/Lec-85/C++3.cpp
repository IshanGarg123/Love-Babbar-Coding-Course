#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    // Write your code here.
    vector<vector<int>> ans(n);
    for(int i=0;i<n;i++)
    {
        ans[i].push_back(i);
    }

    for(int i=0;i<m;i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        ans[u].push_back(v);
        ans[v].push_back(u);
    }
    return ans;
}

int main()
{
    cout << "Creating and Printing the Graph" << endl;
    return 0;
}