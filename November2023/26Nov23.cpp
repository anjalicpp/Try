class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
     
     //Brute Force Approach
      /*  vector<int>res;
       for(int i=0;i<nums.size();i++)
       {
           int sum=0;
           for(int j=0;j<nums.size();j++)
           {
               sum+=abs(nums[j]-nums[i]);
           }
           res.push_back(sum);
       } 
       return res;*/

       //abs(nums[i]*nums.size()-total_sum)wont work...as per test cases it is not the case 
       //tried dry run here we need abs on each and above we are doing abs only on result
       vector<int>res;

       int prefix_sum=0;
       int suffix_sum=0;

       for(int i=0;i<nums.size();i++)
       {
           suffix_sum+=nums[i];
       }

       for(int i=0;i<nums.size();i++)
       {
           int left_sum=nums[i]*i-prefix_sum;//for first i
           int right_sum=suffix_sum-nums[i]*(nums.size()-i);//for remaining nums.size()-i

           int total_sum=left_sum + right_sum;

           res.push_back(total_sum);

           prefix_sum+=nums[i];//continues updation in prefix sum
           suffix_sum-=nums[i];//continues updation in suffix sum
       }
 
      return res;
    }
};
