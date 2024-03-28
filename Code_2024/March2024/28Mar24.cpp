class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0];
        int pro,maxi=INT_MIN;
        for(int i=0;i<nums.size()-1;i++)
        {
                pro=nums[i]*nums[i+1];
                maxi=(pro>maxi)?pro:maxi;
            
        }
        return maxi;
    }
};
