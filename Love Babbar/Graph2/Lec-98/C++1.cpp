#include<iostream>
using namespace std;

/*
void DfS(int node,int parent,int &timer,vector<int> &disc,vector<int> &low, 
vector<vector<int>> &result,map <int,list<int>> &adj , vector<bool> &vis)
{
    vis[node] = true;
    disc[node] = low[node] = timer++;

    for(auto i:adj[node])
    {
        if(i == parent)
        {
            continue;
        }
        if(!vis[i])
        {
            DfS(i,node,timer,disc,low,result,adj,vis);
            low[node] = min(low[node],low[i]);

            if(low[i] > disc[node])
            {
                // bridge present;
                vector<int> ans;
                ans.push_back(node);
                ans.push_back(i);
                result.push_back(ans);
            }
        }
        else
        {
            low[node] = min(low[node],disc[i]);
        }
    }


}


vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
    // Write your code here
    map<int,list<int>> adj;

    for(int i=0;i<e;i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer = 0;

    vector<int> disc(v);
    vector<int> low(v);
    vector<bool> vis(v);

    for(int i=0;i<v;i++)
    {
        disc[i] = -1;
        low[i] = -1;
        vis[i] = false;
    }

    vector<vector<int>> result;

    for(int i=0;i<v;i++)
    {
        if(!vis[i])
        {
            DfS(i,-1,timer,disc,low,result,adj,vis);
        }
    }
    return result;
}
*/

int main()
{
    cout << "Bridges in A Graph" << endl;
    return 0;
}