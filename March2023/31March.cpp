347. Top K Frequent Elements
Medium
13.1K
479


class Solution {
public:
//typedef pair<int,pair<int,int>>ppi;

    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> mh;
        vector<int> ans;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
       
       for(auto it:mp)
       {
           mh.push({it.second,it.first});
           if(mh.size()>k)
           {
               mh.pop();
           }
       }
       while(mh.size()>0)
       {
           ans.push_back(mh.top().second);
           mh.pop();
       }
        return ans;
    }
};
169. Majority Element
Easy
14.2K
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
};
