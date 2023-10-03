#include<iostream>
using namespace std;

/*
void DFS(int node,map<int,bool> &visited,stack<int> &stk,
    map<int,list<pair<int,int>>> &adj)
    {
        visited[node] = true;
        
        for(auto i:adj[node])
        {
            if(!visited[i.first])
            {
                DFS(i.first,visited,stk,adj);
            }
        }
        stk.push(node);
    }

     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        map<int,list<pair<int,int>>> adj;
        for(int i=0;i<M;i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            pair<int,int> p1 = {v,w};
            adj[u].push_back(p1);
        }
        
        map<int,bool> visited;
        stack<int> stk;
        
        for(int i=0;i<N;i++)
        {
            if(!visited[i])
            {
                DFS(i,visited,stk,adj);
            }
        }
        
        
        vector<int> dis(N);
        
        for(int i=1;i<N;i++)
        {
            dis[i] = INT_MAX;
        }
        
        
        
        while(!stk.empty())
        {
            int temp = stk.top();
            stk.pop();
            
            if(dis[temp]!=INT_MAX)
            {
                for(auto i:adj[temp])
                {
                    if(dis[temp] + i.second < dis[i.first])
                    {
                        dis[i.first] = dis[temp] + i.second;
                    }
                }
            }
        }
        
        for(int i=0;i<N;i++)
        {
            if(dis[i] == INT_MAX)
            {
                dis[i] = -1;
            }
        }
        
        return dis;
    }
*/

int main()
{
    cout << "Shortest path in Directed weighted Acyclic Graph using DFS" << endl;
    return 0;
}