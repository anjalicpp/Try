Brute Force
 int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                for(int k=j+1; k<n-1; k++){
                    for(int l=k+1; l<n; l++){
                        if((long long)nums[i] + (long long)nums[j] + (long long)nums[k] + 
                        (long long)nums[l] == target){
                            set.insert({nums[i], nums[j], nums[k], nums[l]});
                        }
                    }
                }
            }
        }
        for(auto it : set){
            output.push_back(it);
        }
        return output;

BETTER SOLUTION

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> st;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;

        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                long newTarget=target-(long)nums[i]-(long)nums[j];
                int low=j+1;
                int high=n-1;
                while(low<high)
                {
                    if(nums[low]+nums[high]<newTarget)
                    {
                        low++;
                    }
                    else if(nums[low]+nums[high]>newTarget)
                    {
                        high--;
                    }
                    else{
                        st.insert({nums[i],nums[j],nums[low],nums[high]});
                        low++;high--;
                        }
                }
            }
        }

        for(auto it:st)
        {
            ans.push_back(it);
        }

        return ans;

    }
};
