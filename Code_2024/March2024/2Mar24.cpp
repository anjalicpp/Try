977. Squares of a Sorted Array
for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
