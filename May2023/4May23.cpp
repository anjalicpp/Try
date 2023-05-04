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
2540. Minimum Common Value
Easy
338
4
Companies
Given two integer arrays nums1 and nums2, sorted in non-decreasing order, return the minimum integer common to both arrays. If there is no common integer amongst nums1 and nums2, return -1.

Note that an integer is said to be common to nums1 and nums2 if both arrays have at least one occurrence of that integer.

 
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       // vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        for(int j=0;j<nums2.size();j++)
        {
            if(mp.find(nums2[j])!=mp.end())
            {
                return nums2[j];
            }
        }
      return -1;
    }
};
