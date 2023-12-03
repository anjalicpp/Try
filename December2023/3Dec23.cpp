class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
       int ans=0;

      for(int i=0;i<points.size()-1;i++)
      {
          int y_res=abs(points[i+1][1]-points[i][1]);
          int x_res=abs(points[i+1][0]-points[i][0]);
          ans+=max(x_res,y_res);
      }  
      return ans;
    }
};
