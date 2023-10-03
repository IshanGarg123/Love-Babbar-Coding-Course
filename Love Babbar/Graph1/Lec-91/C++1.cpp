#include<iostream>
using namespace std;

/*
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    unordered_map<int,list<int>> adj;
    vector<int> indegree(v,0);
    for(int i=0;i<e;i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        indegree[v]++;
    }
    vector<int> ans;

    queue<int> q;

    for(int i=0;i<v;i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
        }
    }

    while(!q.empty())
    {
        int front = q.front();
        q.pop();

        ans.push_back(front);

        for(auto i:adj[front])
        {
            indegree[i]--;
            if(indegree[i] == 0)
            {
                q.push(i);
            }
        }
    }
    return ans;
}
*/

int main()
{
    cout << "Topological Sort In a Graph using Kahn 's Algorithm(BFS)";
    return 0;
}