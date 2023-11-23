class Solution {
public:

    bool is_arith(vector<int>vec)//function to check the subarray part
    {
        if(vec.size()<2)return true;
        sort(vec.begin(),vec.end());
        
        int diff=vec[1]-vec[0];

        for(int i=0;i<vec.size()-1;i++)
        {
            if(vec[i+1]-vec[i]!=diff)
            return false;
        }
        return true;

    }


    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
    
    int n=l.size();
    vector<bool>ans;

    for(int i=0;i<n;i++)
    {
        int rf=l[i];
        int rl=r[i];

        vector<int>temp;
        for(int j=rf;j<=rl;j++)
        {
            temp.push_back(nums[j]);//coping not to distrub original array
        }

        bool res=is_arith(temp);
        ans.push_back(res);
    }
    return ans;
    }
    
};
