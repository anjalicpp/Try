
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
