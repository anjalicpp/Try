
53. Maximum Subarray


Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.

 class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
       /* if(nums.size()==2)
        {
            if(nums[0]<0&&nums[1]<0)
            {
                if(nums[0]>nums[1])return nums[0];
                else 
                return nums[1];
            }
        }*/

         int maxi=INT_MIN;
         int sum=0;
        int i=0;
        int j=0;
        while(j<nums.size())
        {
            sum+=nums[j];
            maxi=max(maxi,sum);
            if(sum<0)
            {
                while(sum<0)
                {
                     maxi=max(maxi,sum);
                
                 sum=sum-nums[i];
                  i++;  
                } 
                //sum=0;
            }
             
                j++;
               
        }
        
        return maxi;
    }
};
