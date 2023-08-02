Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>>&ans,int index)
    {
        if(index>=nums.size())
        { 
            ans.push_back(nums);
            return;
        }
        
        //swaping and solving
        
        for(int j=index;j<nums.size();j++)
        {
            swap(nums[index],nums[j]);
            solve(nums,ans,index+1);
            //backtracing
            swap(nums[index],nums[j]);
            
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums)
    {
         vector<vector<int>>ans;
        int index=0;
        solve(nums,ans,index);
        return ans;
    }
};
