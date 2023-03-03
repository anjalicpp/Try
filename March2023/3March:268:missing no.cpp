Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
  
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res=0;
       for(int i=0;i<nums.size();i++)
       {
        res=nums[i]^res;
       } 
       for(int i=0;i<=nums.size();i++)
       {
           res=res^i;
       }
       return res;
    }
};
