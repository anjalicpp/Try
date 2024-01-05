334. Increasing Triplet Subsequence
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
    //BRUTE FORCE  
     /* int n=nums.size();
       for(int i=0;i<n;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               for(int k=j+1;k<n;k++)
               {
                   if(nums[i]<nums[j]&&nums[j]<nums[k])
                   {
                       return true;
                   }
               }
           }
       }
       return false;*/
       if(nums.size()<3)return false;

       int a=INT_MAX,b=INT_MAX;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]<=a)
           {
               a=nums[i];
           }
           else if(nums[i]<=b)
           {
               b=nums[i];
           }
           else{
               //it is graeter than a and b means triplet found
               return true;
           }
           
       } 
       return false;
    }
};
