class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
      int v=numCourses;
      int cnt=0;
      vector<int>adj[numCourses];

      for(auto it:prerequisites)//creating adjacency list in form u-->v
      {
          adj[it[1]].push_back(it[0]);
      }

      vector<int>indegree(v,0);


      for(int i=0;i<v;i++)
      {
          for(auto it:adj[i])
          {
              indegree[it]++;
          }
      }

      queue<int>q;

      for(int i=0;i<v;i++)//inserting zero indegree nodes
      {
          if(indegree[i]==0)
          q.push(i);
      }

      while(!q.empty())
      {
          int nodes=q.front();
          q.pop();
          cnt++;

          for(auto it:adj[nodes])
          {
              indegree[it]--;
              if(indegree[it]==0)
              {
                  q.push(it);
              }
          }

      }
      
      if(cnt==v)return true;
      return false;
    }
};
