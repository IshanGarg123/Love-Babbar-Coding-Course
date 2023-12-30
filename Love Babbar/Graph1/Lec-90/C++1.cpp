#include<iostream>
using namespace std;

/*
void DFS(int node,vector<int> &visited,stack<int> &ans,unordered_map<int,list<int>> &adj)
{
    visited[node] = 1;

    for(auto i:adj[node])
    {
        if(!visited[i])
        {
            DFS(i,visited,ans,adj);
        }
    }
    ans.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    unordered_map<int,list<int>> adj;
    for(int i=0;i<e;i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    vector<int> visited(v,0);
    stack<int> ans;

    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            DFS(i,visited,ans,adj);
        }
    }

    vector<int> ans1;

    while(!ans.empty())
    {
        int temp = ans.top();
        ans.pop();
        ans1.push_back(temp);
    }

    return ans1;
}*/

int main()
{
    cout << "Topological Sort In a Graph using DFS";
    return 0;
}