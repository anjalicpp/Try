2369. Check if There is a Valid Partition For The Array

You are given a 0-indexed integer array nums. You have to partition the array into one or more contiguous subarrays.
We call a partition of the array valid if each of the obtained subarrays satisfies one of the following conditions:

The subarray consists of exactly 2 equal elements. For example, the subarray [2,2] is good.
The subarray consists of exactly 3 equal elements. For example, the subarray [4,4,4] is good.
The subarray consists of exactly 3 consecutive increasing elements, that is, the difference between adjacent elements is 1. For example, the subarray [3,4,5] is good, but the subarray [1,3,5] is not.
Return true if the array has at least one valid partition. Otherwise, return false.

 

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      vector<vector<int>>ans;
      sort(intervals.begin(),intervals.end());
      int n=intervals.size();

      int x1=intervals[0][0],x2=intervals[0][1];
      for(int i=1;i<n;i++)
      {
          int y1=intervals[i][0];
          int y2=intervals[i][1];

          if(x2<y1)//[(2,4),(6,9)]wala case
          {
              ans.push_back({x1,x2});
              x1=y1;
              x2=y2;
          }
          else if(x2==y1)//[(2,3),(3,5)]wala case
          {
              x2=y2;
          }
          else if(x1<=y1&&y1<x2)
          {
              x2=max(x2,y2);//[(2,4),(3,6)]wala case
          }
          //ans.push_back({x1,x2});
      }

      ans.push_back({x1,x2});
      return ans;
    }
};
