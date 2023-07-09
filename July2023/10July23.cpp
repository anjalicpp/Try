2600. K Items With the Maximum Sum
Easy
211
20
Companies
There is a bag that consists of items, each item has a number 1, 0, or -1 written on it.

You are given four non-negative integers numOnes, numZeros, numNegOnes, and k.

The bag initially contains:

numOnes items with 1s written on them.
numZeroes items with 0s written on them.
numNegOnes items with -1s written on them.
We want to pick exactly k items among the available items. Return the maximum possible sum of numbers written on the items.
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
1749. Maximum Absolute Sum of Any Subarray

