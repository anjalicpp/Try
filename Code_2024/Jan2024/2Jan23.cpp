2610. Convert an Array Into a 2D Array With Conditions
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
    unordered_map<int,int>mp;
    int maxi=0;
    for(auto it:nums)
    {
        mp[it]++;
        maxi=max(mp[it],maxi);
    }  

     vector<vector<int>> ans(maxi);
     

    
         
         for(auto it:mp)
         {
           int num=it.first;
           int freq=it.second;

           for(int i=0;i<freq;i++)
           {
               ans[i].push_back(num);
           }
        
         }
         

     return ans;
    }
};
