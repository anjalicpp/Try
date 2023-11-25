Brute force :42/59 cases

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int>res;

        for(int)

       for(int i=0;i<nums.size();i++)
       {
           int sum=0;
           for(int j=0;j<nums.size();j++)
           {
               sum+=abs(nums[j]-nums[i]);
           }
           res.push_back(sum);
       } 
       return res;
    }
};
