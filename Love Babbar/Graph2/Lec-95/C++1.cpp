#include<iostream>
using namespace std;

/*
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // Write your code here.
    unordered_map<int,list<pair<int,int>>> adj;
    for(int i=0;i<edges;i++)
    {
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    vector<int> dis(vertices);

    for(int i=0;i<vertices;i++)
    {
        dis[i] = INT_MAX;
    }

    dis[source] = 0;

    set<pair<int,int>> s;
    s.insert(make_pair(0,source));

    while(!s.empty())
    {
        auto top = *(s.begin());

        int nodeDis = top.first;
        int topNode = top.second;

        s.erase(s.begin());

        for(auto i:adj[topNode])
        {
            if(nodeDis + i.second < dis[i.first])
            {
                auto record  = s.find(make_pair(dis[i.first],i.first));
                if(record != s.end())
                {
                    s.erase(record);
                }  

                dis[i.first] = nodeDis + i.second;
                s.insert(make_pair(dis[i.first],i.first));

            }
        }
    }
    return dis;
}
*/

int main()
{
    cout << "Dijkstra's Algorithm" << endl;
    return 0;
}