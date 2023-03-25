448. Find All Numbers Disappeared in an Array
Easy

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>mp;
        vector<int> ans;
        for(auto it:nums)
        {
            mp[it]++;
        }

        for(int i=1;i<=nums.size();i++)
        {
            if(mp.find(i)==mp.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

442. Find All Duplicates in an Array
Medium


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     vector<int>ans;
    int k=2;
      int i=0,j=0;
      while(j<nums.size())
      {
          if(j-i+1<k)
          {
              j++;
          }
          else if(j-i+1==k)
          {
              if(nums[i]==nums[j])
              ans.push_back(nums[i]);
              i++;j++;
          }
      }
      return ans;  
    }
};
