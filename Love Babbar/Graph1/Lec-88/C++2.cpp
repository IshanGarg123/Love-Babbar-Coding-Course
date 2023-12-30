#include<iostream>
using namespace std;

/*
bool isCyclicDFS(int src,int parent,map<int,set<int>> &adj,map<int,bool> &visited)
{
    visited[src] = true;
    for (auto i:adj[src])
    {
        if(!visited[i])
        {
            bool ans = isCyclicDFS(i,src,adj,visited);
            if(ans)
            {
                return true;
            }
        }
        else if(visited[i] && i!=parent)
        {
            return true;
        }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    map<int,set<int>> adj;
    for(int i=0;i<m;i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].insert(v);
        adj[v].insert(u);
    }

    map<int,bool> visited;

    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            bool ans = isCyclicDFS(i,-1,adj,visited);
            if(ans)
            {
                return "Yes";
            }
        }
    }
    return "No";
}
*/

int main()
{
    cout << "Cycle Detection in a Undirected Graph using DFS" << endl;
    return 0;
}