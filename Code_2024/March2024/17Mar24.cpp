57. Insert Interval
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

       vector<vector<int>>ans;
       intervals.push_back(newInterval);
      
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
