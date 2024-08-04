class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
       vector<int>prefixSum;
      vector<int>arr;
        int sum=0;
        
      for(auto it:nums)
      {
        sum+=it;
        prefixSum.push_back(sum);

      }  

      for(int i=0;i<n;i++)
      {
        arr.push_back(prefixSum[i]);
        for(int j=i-1;j>=0;j--)
        {
            arr.push_back(prefixSum[i]-prefixSum[j]);
        }
      }
      
      sort(arr.begin(),arr.end());
      int ansSum=0;
      
      for(int i=left-1;i<right;i++)
      {
        ansSum=(ansSum+arr[i])%1000000007;
      }
      return ansSum;  
    }
};
