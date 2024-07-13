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
-----------------------
135. Candy

    class Solution {
public:
    int candy(vector<int>& ratings) {

        int n=ratings.size();

        vector<int>left(n,1);
        vector<int>right(n,1);
        
        int sum=0;

        for(int i=1;i<n;i++)//left array filling
        {
            if(ratings[i]>ratings[i-1])
            {
                left[i]=left[i-1]+1;
            }
            else{
                left[i]=1;
            }
        }

        for(int j=n-2;j>=0;j--)//right array filling
        {
            if(ratings[j]>ratings[j+1])
            {
                right[j]=right[j+1]+1;
            }
            else{
                right[j]=1;
            }
        }
        for(int i=0;i<n;i++)//taking max of right and left and adding to final sum
        {
            sum+=max(right[i],left[i]);
        }
        return sum;
    }
};
