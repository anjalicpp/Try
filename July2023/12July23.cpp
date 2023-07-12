219. Contains Duplicate II
Easy
5.1K
2.7K
Companies
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       /* for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j]&&abs(i-j)<=k) return true;
            }
        }
        return false;*/
        int i=0;
        int j=0;
        map<int,int>mp;


        while(j<nums.size())
        {
            mp[nums[j]]++;
            if(j-i+1<=k+1)
            {
            if(mp.size()<(j-i+1))
            {
                return true;
            }
            }

            else{
                if(mp[nums[i]]==1)
                mp.erase(nums[i]);
                else mp[nums[i]]--;
                i++;
            } 
             if(mp.size()<(j-i+1))
            {
                return true;
            }
            j++;
        }
        return false;
    }
};
 
