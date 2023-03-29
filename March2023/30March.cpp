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
