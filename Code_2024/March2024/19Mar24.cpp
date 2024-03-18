452. Minimum Number of Arrows to Burst Balloons
class Solution {
public:
   static bool comparator(const vector<int>&a,const vector<int>&b)//comparator function
    {
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
       sort(points.begin(),points.end(),comparator);
       int ans=1;
       int end=points[0][1];

       for(int i=0;i<points.size();i++)
       {
            if(points[i][0]>end)///if current is out of range then we use new arrow
            {
                ans++;//arrow increased
                end=points[i][1];//end point updated
            }
    
       }
        return ans;
    }
};
