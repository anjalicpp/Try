Contest:Weekly Contest 403
Date:23/06/24
Question solved:1

3194. Minimum Average of Smallest and Largest Elements

  class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        
        double mini=DBL_MAX;
        
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        
        for(int i=0,j=n-1;i<j;i++,j--)
        {
            double avg=double((nums[i]+nums[j]))/2;
            
            if(avg<=mini)
                mini=avg;
        }
        return mini;
        
    }
};
