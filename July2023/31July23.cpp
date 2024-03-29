785. Is Graph Bipartite?
There is an undirected graph with n nodes, where each node is numbered between 0 and n - 1. You are given a 2D array graph, where graph[u] is an array of nodes that node u is adjacent to. More formally, for each v in graph[u], there is an undirected edge between node u and node v. The graph has the following properties:

There are no self-edges (graph[u] does not contain u).
There are no parallel edges (graph[u] does not contain duplicate values).
If v is in graph[u], then u is in graph[v] (the graph is undirected).
The graph may not be connected, meaning there may be two nodes u and v such that there is no path between them.
A graph is bipartite if the nodes can be partitioned into two independent sets A and B such that every edge in the graph connects a node in set A and a node in set B.

Return true if and only if it is bipartite.

 



class Solution {
public:

    bool check(int start,int v,vector<vector<int>> grid,int color[])
    {
        color[start]=0;
        queue<int>q;
        q.push(start);

        while(!q.empty())
        {
            int node=q.front();
            q.pop();

            for(auto it:grid[node])
            {
                if(color[it]==-1)//if not colored
                {
                    color[it]=!color[node];//give color opposite to parent node
                    q.push(it);
                }
                else if(color[it]==color[node])
                //if colored check color in respect to parent node
                {
                    return false;
                }
            }

        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
       int v=graph.size();
       int color[v];

       for(int i=0;i<v;i++)
       {
           color[i]=-1;
       }

       for(int i=0;i<v;i++)
       {
           if(color[i]==-1)
           {
               if(check(i,v,graph,color)==false)
               return false;
           }
       }

       return true;

    }
};
