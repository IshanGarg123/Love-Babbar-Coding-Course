#include<iostream>
using namespace std;

/*
void DFS(int node,unordered_map<int,bool> &vis,stack<int> &st,
unordered_map<int,list<int>> &adj)
{
	vis[node] = true;
	for(auto i:adj[node])
	{
		if(!vis[i])
		{
			DFS(i,vis,st,adj);
		}

	}
	st.push(node);
}

void revDFS(int node,unordered_map<int,bool> &vis,
unordered_map<int,list<int>> &adj)
{
	vis[node] = true;
	for(auto i:adj[node])
	{
		if(!vis[i])
		{
			revDFS(i,vis,adj);
		}
	}
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges) {
  // Write your code here.
    unordered_map<int, list<int>> adj;
    for (int i=0;i<edges.size();i++)
    {
		int u = edges[i][0];
		int v = edges[i][1];
		adj[u].push_back(v);
	}

	stack<int> st;
	unordered_map<int,bool> vis;
	for(int i=0;i<v;i++)
	{
		if(!vis[i])
		{
			DFS(i,vis,st,adj);
		}
	}

	// create a transpose graph
	unordered_map<int,list<int>> transpose;
	for(int i=0;i<v;i++)
	{
		vis[i]=0;
		for(auto j:adj[i])
		{
			transpose[j].push_back(i);
		}
	}


	// dfs call using above odering
	int count = 0;
	while(!st.empty())
	{
		int top = st.top();
		st.pop();
		if(!vis[top])
		{
			count++;
			revDFS(top,vis,transpose);
		}
	}
	return count;

}
*/

int main()
{
    cout << "Kosaraju 's Algorithm" << endl;
    return 0;
}