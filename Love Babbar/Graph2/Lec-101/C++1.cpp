#include<iostream>
using namespace std;

/*
vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // Code here
        vector<int> dis(V,1e8);
        dis[S] = 0;
        
        for(int j=0;j<V-1;j++)
        {
            for(int i=0;i<edges.size();i++)
            {
                int u=edges[i][0];
                int v=edges[i][1];
                int wt = edges[i][2];
            
                if(dis[u]!=1e8 && dis[u] + wt < dis[v])
                {
                    dis[v] = dis[u] + wt;
                }
            }
        }
        
        bool flag = 0;
        
        for(int i=0;i<edges.size();i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            int wt = edges[i][2];
            
            if(dis[u]!=1e8 && dis[u] + wt < dis[v])
            {
                flag = 1;
            }
        }
        
        if(flag)
        {
            vector<int> ans;
            ans.push_back(-1);
            return ans;
        }
        return dis;
    }
*/

int main()
{
    cout << "Bellman Ford Algorithm" << endl;
    return 0;
}