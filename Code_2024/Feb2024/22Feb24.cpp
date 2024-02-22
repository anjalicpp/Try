class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int>mp;
        for(auto it:trust)
        {
            mp[it[1]]++;
        }

        for(auto it:mp)
        {
          ///ERRoR  if(it.second==n-1&&find(trust.begin(),trust.end())return it.first;
        }
        return -1;
    }
};
