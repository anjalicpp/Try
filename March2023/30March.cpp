973. K Closest Points to Origin
Medium

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& nums, int k) {
        priority_queue<pair<int,vector<int>>> maxh;
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++)
        {
            maxh.push({nums[i][0]*nums[i][0]+nums[i][1]*nums[i][1],{nums[i][0],nums[i][1]}});
            if(maxh.size()>k)
            {
                maxh.pop();
            }
        }

        while(maxh.size()>0)
        {
           
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        return ans;
    }
};

2574. Left and Right Sum Differences
Easy

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        
       vector <int> leftSum;
        vector <int> rightSum;
        vector <int> ans;
        int left_sum=0;
        int right_sum=0;
        for(int i=0;i<nums.size();i++){
                leftSum.push_back(left_sum);
                rightSum.push_back(right_sum);
                left_sum+=nums[i];
                right_sum+=nums[nums.size()-1-i];
        }
        for(int i=0;i<nums.size();i++){
            cout<<leftSum[i]<<" "<<rightSum[i]<<endl;
            ans.push_back(abs(leftSum[i]-rightSum[nums.size()-1-i]));
        }
        return ans;
    }
};
