class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        long long int peri=0,sum=nums[0]+nums[1];
        for(int i=2;i<nums.size();i++)
        {
            if(sum>nums[i])
            {
                peri=sum+nums[i];
                
            }
            sum+=nums[i];
        }
        return peri==0?-1:peri;

    }
};
