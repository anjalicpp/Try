137. Single Number II
Medium
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int result;
        for(int i=0;i<nums.size()-1;i=i+3)
        {
            result=nums[i]^nums[i+1];
            if(result!=0)return nums[i];
        }
        return nums[nums.size()-1];
    }
};
