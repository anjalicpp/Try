57. Insert Interval

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newIntervals) {
        
        vector<vector<int>>ans;
        vector<int>mergeIntervals{2,0};
        int n=intervals.size();
        int i=0;

        
        
            while(i<n&&intervals[i][1]<newIntervals[0])
            {//function to find left portion
                ans.push_back(intervals[i]);
                i++;//
            }
            while(i<n&&intervals[i][0]<=newIntervals[1])
            {//merging middle portion
                newIntervals[0]=min(newIntervals[0],intervals[i][0]);
                newIntervals[1]=max(newIntervals[1],intervals[i][1]);
                i++;
            }
            ans.push_back(newIntervals);

            while(i<n)
            {//pushing right portion as it is
                ans.push_back(intervals[i]);
                i++;

            }
        
        return ans;
    }
};
