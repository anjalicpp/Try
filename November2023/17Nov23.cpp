1877. Minimize Maximum Pair Sum in Array

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        //sorting array so that we can make pairs using two pinter with highest&lowest pairing

        int ans=0;
        int i=0;
        int j=nums.size()-1;
        //using two pointer approach
        while(i<j)
        {
            ans=max(ans,nums[i]+nums[j]);
           i++;
           j--;
        }

        return ans;
    }
};

Total Leetcode Questions=285
    Medium=119
