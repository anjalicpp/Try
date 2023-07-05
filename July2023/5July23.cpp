class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int i=0;
       int j=0;
       int count_zero=0;
       int maxi=0;


       while(j<nums.size())
       {
           if(nums[j]==0)
           count_zero++;

          /* if(count_zero<2)
           {
               j++;
           }*/
           if(count_zero>=2)
           {
               maxi=max(maxi,j-i-1);
               while(nums[i]!=0)
               {
                   i++;
               }
                    i++;
                   count_zero=1;j++;
            }
           else {
                maxi=max(maxi,j-i);
                j++;
               }

          // maxi=max(maxi,j-i+1);
       } 
       if(count_zero==0)return maxi;
       return maxi;
    }
};
