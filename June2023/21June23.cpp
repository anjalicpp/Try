class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==0) return nums;

        
      vector<int> ans(n,-1);
      if(2*k+1>n)return ans; 
      
      vector<long long> prefix(n+1);
      for(int i=0;i<n;i++)
      {
          prefix[i+1]=prefix[i]+nums[i];
      }
     int size=2*k+1;
      for(int i=k;i<n-k;i++)
      {
          int lower=i-k;
          int upper=i+k;
          long long val=(prefix[upper+1]-prefix[lower]);
          int avg=val/size;
          ans[i]=avg;
      }
        return ans;
    }
};
