
Problem 1636
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
     map<int,int>mp;
     for(auto it:nums)
     {
         mp[it]++;
     }   

     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>mh;
     for(auto it:mp)
     {
         mh.push({it.second,it.first});
     }
     while(mh.size()>0)
     {
         int frequency=mh.top().first;
         int ele=mh.top().second;
         for(int i=0;i<frequency;i++)
         {
             ans.push_back(ele);
         }
         mh.pop();
     }
     //reverse(ans.begin(),ans.end());
     return ans;
    }
};
