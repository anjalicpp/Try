class Solution {
public:
    int majorityElement(vector<int>& nums) {
      map<int,int>mp;
      for(auto it:nums)
      {
          mp[it]++;
      } 
      priority_queue<pair<int,int>>mh;
      for(auto i:mp)
      {
          mh.push({i.second,i.first});
      }
    return  mh.top().second; 
    }
};1
