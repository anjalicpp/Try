2248. Intersection of Multiple Arrays
Easy
528
25
Companies
Given a 2D integer array nums where nums[i] is a non-empty array of distinct positive integers, return the list of integers that are present in each array of nums sorted in ascending order.

  class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                mp[nums[i][j]]++;
            }
        }

        for(auto it:mp)
        {
            if(it.second==nums.size())
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
