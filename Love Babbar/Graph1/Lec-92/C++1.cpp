#include<iostream>
using namespace std;

/*
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges)
{
  map<int,list<int>> adj;
  vector<int> indegree(n,0);
  for(int i=0;i<edges.size();i++)
  {
    int u = edges[i].first-1;
    int v = edges[i].second-1;

    adj[u].push_back(v);
    indegree[v]++;
  }

  queue<int> q;
  for(int i=0;i<n;i++)
  {
    if(indegree[i] == 0)
    {
      q.push(i);
    }
  }

  int count = 0;

  while(!q.empty())
  {
    int temp = q.front();
    q.pop();
    count++;

    for(auto i:adj[temp])
    {
      indegree[i]--;
      if(indegree[i]==0)
      {
        q.push(i);
      }
    }
  }

  if(count == n)
  {
    return false;
  }
  return true;
} 
*/

int main()
{
    cout << "Cycle Detection in a directed Graph using BFS" << endl;
    return 0;
}