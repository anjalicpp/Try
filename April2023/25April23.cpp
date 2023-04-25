class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
     
     int left=0,right;
        for(right=1;right<nums.size();right++)
        {
            if(nums[left]!=nums[right])
                left++;
            nums[left]=nums[right];
        }
        return left+1;
       /* map<int,int>mp;
        for (auto it:nums)
        {
            mp[it]++;
        }
        int i=0;
        for(auto it:mp)
        {
            nums[i++]=it.first;
        }
        return nums.size();*/
    }
};
