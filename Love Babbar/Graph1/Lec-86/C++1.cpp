#include<iostream>
using namespace std;

/*
void prepareAdjList(vector<pair<int, int>> &edges,
unordered_map<int,set<int>> &adjList)
{
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i].first;
        int v=edges[i].second;
        adjList[u].insert(v);
        adjList[v].insert(u);
    }

}

void BFS(unordered_map<int,set<int>> &adjList,unordered_map<int,bool>&visited,
vector<int> &ans, int n)
{
    queue<int> q;
    q.push(n);
    visited[n] = 1;

    while(!q.empty())
    {
        int temp = q.front();
        q.pop();

        ans.push_back(temp);

        for(auto i:adjList[temp])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i]=1;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here
    unordered_map<int,set<int>> adjList;
    prepareAdjList(edges,adjList);

    vector<int> ans;
    unordered_map<int,bool> visited;

    for(int i=0;i<vertex;i++)
    {
        if(!visited[i])
        {
            BFS(adjList,visited,ans,i);
        }
    }

    return ans;
}
*/

int main()
{
    cout << "Breath First Search in Graph" << endl;
    return 0;
}