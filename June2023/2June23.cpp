class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       /*sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=0;i<nums.size()-1;)
        {
           int result=nums[i]^nums[i+1];
            if(result!=0)
            {ans.push_back(nums[i]);i++;}
            else i+=2;
        }
        ans.push_back(nums[nums.size()-1]);
        return ans;*/
        map<int,int>m;vector <int>ans;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto it:m)
        {
            if(it.second!=2)ans.push_back(it.first);
        }
        return ans;
    }
};
