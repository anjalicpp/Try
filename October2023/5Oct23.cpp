class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int limit=floor(nums.size()/3);
        vector<int> ans;
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
        while(mh.size()>0)
        {
            if(mh.top().first>limit)
            ans.push_back(mh.top().second);
            mh.pop();
        } 
        return ans;
    }
};
