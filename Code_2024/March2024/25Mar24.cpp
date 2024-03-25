class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     vector<int>ans;
    int k=2;
      int i=0,j=0;
      while(j<nums.size())
      {
          if(j-i+1<k)
          {
              j++;
          }
          else if(j-i+1==k)
          {
              if(nums[i]==nums[j])
              ans.push_back(nums[i]);
              i++;j++;
          }
      }
      return ans;  
    }
};
