class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
      /*  if(k==1) {
        long long int ans=max(nums.begin(),nums.end());
        return ans;
        }*/
        
        int i=0,j=0;
        long long int sum=0;
        int size=nums.size();
        long long int maxi=0;

        while(j<size)
        {
            sum+=nums[j];
            if(j-i+1<k)
            {
                j++;
            }

            else if(j-i+1==k)
            {
                if((nums[i]==nums[j]||nums[i]==nums[i+1]||nums[j]==nums[j-1])&&k!=1)
                {
                long long int zero=0;
                   maxi=max(maxi,zero); 
                
                }
                else {
                    maxi=max(maxi,sum);
                }
                sum=sum-nums[i];
                 i++;j++;
            }
        }
        
        return maxi;
    }
};
