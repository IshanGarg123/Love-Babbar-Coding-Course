#include<iostream>
using namespace std;

/*
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // Write your code here
    unordered_map<int,list<pair<int,int>>> adj;
    for(int i=0;i<m;i++)
    {
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    vector<int> key(n+1);
    vector<int> visited(n+1);
    vector<int> parent(n+1);

    for(int i=1;i<=n;i++)
    {
        key[i] = INT_MAX;
        visited[i] = false;
        parent[i] = -1;
    }

    key[1] = 0;
    parent[1] = -1;

    for(int i=1;i<=n;i++)
    {
        int mini = INT_MAX;
        int u;
        for(int j=1;j<=n;j++)
        {
            if(key[j]<mini && !visited[j])
            {
                u = j;
                mini = key[j];
            }
        }

        visited[u] = true;

        for(auto i:adj[u])
        {
          if (!visited[i.first] && key[i.first] > i.second) {
            key[i.first] = i.second;
            parent[i.first] = u;
          }
        }
    }

    vector<pair<pair<int,int>,int>> result;

    for(int k=2;k<=n;k++)
    {
        result.push_back({{parent[k],k},key[k]});
    }
    return result;

}
*/

int main()
{
    cout << "Prim's MST Algorithm" << endl;
    return 0;
}