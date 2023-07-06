209. Minimum Size Subarray Sum
Given an array of positive integers nums and a positive integer target, return the minimal length of a 
subarray
 whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

 
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int i=0,j=0;
        int ans=INT_MAX;
        int sum=0;

       while(j<nums.size())
       {
           sum+=nums[j];
           if(sum<target)
           {
               j++;
           }
          else if(sum==target)
            {
                
                ans=min(ans,j-i+1);
                j++;
            }
            else if(sum>target)
            {
               // ans=min(ans,j-i+1);
                while(sum>target)
                {
                     ans=min(ans,j-i+1);
                    sum=sum-nums[i];
                    i++;
                     if(sum==target)
                {
                    ans=min(ans,j-i+1);
                }
                    
                    
                }
                
                j++;
            }

       } 
       if(ans==INT_MAX) return 0;
       return ans;
    }
};
