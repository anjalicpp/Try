2798. Number of Employees Who Met the Target

There are n employees in a company, numbered from 0 to n - 1. Each employee i has worked for hours[i] hours in the company.
The company requires each employee to work for at least target hours.
You are given a 0-indexed array of non-negative integers hours of length n and a non-negative integer target.
Return the integer denoting the number of employees who worked at least target hours.

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
      sort(hours.begin(),hours.end());
      int n=hours.size();
      int ans=-1;

      for(int i=0;i<n;i++)
      {
          if(hours[i]>=target)
          {
              ans=i;
              break;
          }
      } 
      if(ans==-1)return 0;

      return n-ans;
    }
};
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

2784. Check if Array is Good

You are given an integer array nums. We consider an array good if it is a permutation of an array base[n].
base[n] = [1, 2, ..., n - 1, n, n] (in other words, it is an array of length n + 1 which contains 1 to n - 1 exactly once, plus two occurrences of n). For example, base[1] = [1, 1] and base[3] = [1, 2, 3, 3].
Return true if the given array is good, otherwise return false.
Note: A permutation of integers represents an arrangement of these numbers.

 
class Solution {
public:
    bool isGood(vector<int>& nums) {
      int n=nums.size();

     // sort(nums.begin(),nums.end());
      int base=*max_element(nums.begin(),nums.end());

      map<int,int>mp;
      for(auto it:nums)
      {
        mp[it]++;
        if(mp[it]>=2&&it!=base)return false;
      }

      if(mp.size()==base&&mp[base]==2)return true;
      return false;
      
    }
};
