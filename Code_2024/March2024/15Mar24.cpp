238. Product of Array Except Self
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
