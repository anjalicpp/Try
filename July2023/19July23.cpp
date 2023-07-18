238. Product of Array Except Self
Medium

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n = nums.size();
         int output[n];
         vector<int> ans;

        
        
        
        int product = 1;
        for(int i=0;i<n;i++) {
            product*=nums[i];
            output[i] = product;
        }
        product = 1;
        for(int i=n-1;i>0;i--) {
            output[i] = output[i-1] * product;
            product*=nums[i];
        }
        output[0] = product;
       
        for(int i=0;i<n;i++)
        {
            ans.push_back(output[i]);
        }
       
        return ans;   
    }
};
