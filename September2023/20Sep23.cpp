class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
      int target=0;
      int n=nums.size();
      int sum=0;

      for(auto it:nums)
      {
          sum+=it;
      }
      target=sum-x;
      if(target==0)return n;

      int maxi=0;
      int csum=0;
      int i=0;

      for(int j=0;j<n;j++)
      {
          csum=csum+nums[j];
          while(i<=j&&csum>target)
          {
              csum=csum-nums[i];
              i++;
          }
          if(csum==target){
              maxi=max(maxi,j-i+1);
          }
      }
    return maxi?n-maxi:-1;
    }
};
