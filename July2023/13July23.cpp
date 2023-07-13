207. Course Schedule
Medium

There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai.

For example, the pair [0, 1], indicates that to take course 0 you have to first take course 1.
Return true if you can finish all courses. Otherwise, return false.

 


class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
       sort(prerequisites.begin(),prerequisites.end());
       int n=numCourses;
       map<int,int>mp;

       while(n)
       {
           for(auto i:prerequisites)
         { mp[i[0]]=i[1];
          if(mp.find(i[1])!=mp.end()&&mp[i[1]]==i[0])return false;
         }
           n--;
       }
       return true;

       
    }
};
