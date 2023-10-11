class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>g;
        int l=0,r=nums.size();int mid=l+r/2;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==target)
               g.push_back(i);
       }
        return g;
    }
};
