797. All Paths From Source to Target

Given a directed acyclic graph (DAG) of n nodes labeled from 0 to n - 1, find all possible paths from node 0 to node n - 1 and return them in any order.
The graph is given as follows: graph[i] is a list of all nodes you can visit from node i (i.e., there is a directed edge from node i to node graph[i][j]).

class Solution {
public:

    void dfs(int s,int e, vector<vector<int>>graph,vector<int>&path,vector<vector<int>>&ans)
    {
        path.push_back(s);
        if(s==e)//if end node is meet
        {
            ans.push_back(path);
        }
    
        else{
            for(auto it:graph[s])
            {
                 dfs(it,e,graph,path,ans);
            
            }
        }
        path.pop_back();//backtrack
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
      vector<vector<int>>ans;
      vector<int>path;
      int n=graph.size(); 

      dfs(0,n-1,graph,path,ans);

      return ans; 
    }
};
