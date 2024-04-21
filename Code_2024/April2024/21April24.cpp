class Solution {
public:


    bool dfs(int node,int destination,unordered_map<int,vector<int>> &graph, unordered_set<int>&visited)
    {
        if(node==destination)return true;

        visited.insert(node);
        for(int it:graph[node])
        {
            if(visited.find(it)==visited.end())
            {
                if(dfs(it,destination,graph,visited))
                return true;
            }
        }
        return false;

    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        unordered_map<int,vector<int>>graph;
        for(auto it:edges)
        {
            int u=it[0];
            int v=it[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        unordered_set<int> visited;
        
        return dfs(source,destination,graph,visited);

    }
};
