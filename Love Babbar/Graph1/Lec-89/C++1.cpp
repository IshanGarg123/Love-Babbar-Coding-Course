#include<iostream>
using namespace std;

/*
bool isCyclicDFS(int src,map<int,set<int>> &adj,map<int,bool> &visited,
  map<int,bool> &DFSvisited)
{
  visited[src] = true;
  DFSvisited[src] = true;

  for(auto i:adj[src])
  {
    if(!visited[i])
    {
      bool ans = isCyclicDFS(i,adj,visited,DFSvisited);
      if(ans)
      {
        return true;
      }
    }
    else if(visited[i] && DFSvisited[i])
    {
      return true;
    }
  }
  DFSvisited[src] = false;
  return false;
}


int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
  map<int,set<int>> adj;

  for(int i=0;i<edges.size();i++)
  {
    int u = edges[i].first;
    int v = edges[i].second;
    adj[u].insert(v);
  }

  map<int,bool> visited;
  map<int,bool> DFSvisited;

  for(int i=1;i<=n;i++)
  {
    if(!visited[i])
    {
      bool ans = isCyclicDFS(i,adj,visited,DFSvisited);
      if(ans)
      {
        return 1;
      }
    }
  }
  return 0;
}*/

int main()
{
    cout << "Detect Cycle In A Directed Graph Using DFS";
    return 0;
}