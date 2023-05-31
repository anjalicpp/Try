class Solution {
public:
    void solve(int index,int target,vector<int>&nums,vector<int>output,vector<vector<int>>&ans)
    {
        if(index==nums.size())
        {
            if(target==0)
            {
                ans.push_back(output);
            }
            return;
        }
        
        //pick wali condition
        
        if(nums[index]<=target)
        {
            output.push_back(nums[index]);
            solve(index,target-nums[index],nums,output,ans);
            output.pop_back();
            
        }
        
        //not pick wali condition
        
        solve(index+1,target,nums,output,ans);
        
    } 

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     
           vector<vector<int>> ans;
           vector<int> output;
        solve(0,target,candidates,output,ans);
        return ans;
    }
};
