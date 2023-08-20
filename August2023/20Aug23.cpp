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
