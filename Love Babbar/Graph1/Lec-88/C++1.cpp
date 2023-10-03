#include<iostream>
using namespace std;

/*bool isCyclicBFS(int src,map<int,bool>&visited,map<int,set<int>> 
&adj)
{
    unordered_map<int,int> parent;

    parent[src] = -1;
    visited[src] = 1;
    queue<int> q;
    q.push(src);

    while(!q.empty())
    {
        int front = q.front();
        q.pop();

        for(auto i:adj[front])
        {
            if(visited[i]==true && i!=parent[front])
            {
                return true;
            } 
            else if(!visited[i])
            {
                q.push(i);
                visited[i] = true;
                parent[i] = front;
            }  
        }
    }
    return false;

}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    map<int,set<int>> adj;
    for(int i=0;i<m;i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].insert(v);
        adj[v].insert(u);
    }
    map<int,bool> visited;

    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            bool ans = isCyclicBFS(i,visited,adj);
            if(ans)
            {
                return "Yes";
            }
        }
    }
    return "No";
}*/

int main()
{
    cout << "Cycle Detection in a Undirected Graph using BFS" << endl;
    return 0;
}