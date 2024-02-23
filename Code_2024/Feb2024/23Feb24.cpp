3
  class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
       vector<pair<int,int>>adj[n];

       //making graph
        for(auto it:flights)
        {
            adj[it[0]].push_back({it[1],it[2]});
        }

        vector<int>dist(n,1e9);//distance array

        dist[src]=0;//making source distance=0 in distance array;

        queue<pair<int,pair<int,int>>>q;//queue of format={steps,{node,weight}}

        q.push({0,{src,0}});//pushing initial source node

        while(!q.empty())
        {
            auto it=q.front();
            int steps=it.first;
            int node=it.second.first;
            int weight=it.second.second;
            q.pop();

            if(steps>k) continue;//if steps>k leave that node continue with new node

            for(auto it:adj[node])//traversing adjnode of the given node
            {
                int adjnode=it.first;
                int edw=it.second;

                if(weight+edw<dist[adjnode]&&steps<=k)
                {
                    dist[adjnode]=weight+edw;
                    q.push({steps+1,{adjnode,weight+edw}});
                }
            }
        }

    if(dist[dst]==1e9)return -1;//if we cannot reach destination
    return dist[dst];

    }
};
