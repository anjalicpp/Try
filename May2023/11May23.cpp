2404. Most Frequent Even Element
Easy

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        if(nums.size()==1&&nums[0]%2==0)
        {
            return nums[0];
        }
        map<int,int>mp;
      for(auto it:nums)
      {
          mp[it]++;
      } 
     //priority_queue<pair<int,int>,vector<pair<int,int>>,greater<vector<int,int>>> minh;
     priority_queue<pair<int,int>>mh;
     int ans=INT_MAX;
     int amxi=INT_MIN;

     for(auto it:mp)
     {
         mh.push({it.second,it.first});
     }
     while(mh.size()>0)
     {
         
        if(mh.top().second%2==0&&mh.top().first>=amxi)
       { 
           amxi=mh.top().first;
            ans=min(mh.top().second,ans); 
       }
       mh.pop();
     }
     
     if(ans==INT_MAX)
     return -1;
     
     return ans;
    }
};

229. Majority Element II
Medium
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
