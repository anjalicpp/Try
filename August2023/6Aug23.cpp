class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
      int ans=0;
      while(k)
      {
          if(numOnes)
          {
              ans=ans+1;
              numOnes--;
          }
          else if(numZeros)
          {
              ans=ans;
              numZeros--;
          }
          else {
              ans=ans-1;
              numNegOnes--;
          }
          k--;
      } 
      return ans; 
    }
};
