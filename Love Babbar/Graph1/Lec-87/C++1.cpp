#include<iostream>
using namespace std;

/*
void DFS(unordered_map<int,bool> &visited,unordered_map<int,list<int>> adjList,
int n,vector<int> &temp)
{
    temp.push_back(n);
    visited[n] = true;
    for(auto i:adjList[n])
    {
        if(!visited[i])
        {
            DFS(visited,adjList,i,temp);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    unordered_map<int,list<int>> adjList;

    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    vector<vector<int>> ans;
    unordered_map<int,bool> visited;

    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
            vector<int> temp;
            DFS(visited,adjList,i,temp);
            ans.push_back(temp);
        }
    }
    return ans;

}
*/

int main()
{
    cout << "Depth First Search in Graph" << endl;
    return 0;
}