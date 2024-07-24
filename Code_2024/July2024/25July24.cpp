2191. Sort the Jumbled Numbers
class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
     vector<int>ans;
     int indx=0;
     vector<pair<int,int>>temp;

     for(auto num:nums) 
     {
        string s=to_string(num);
        string n="";
        for(auto it:s)
        {
            n+=to_string(mapping[it-'0']);
        }
        temp.push_back({stoi(n),indx++});

     }  

     sort(temp.begin(),temp.end());
     for(auto it:temp)
     {
        ans.push_back(nums[it.second]);
     }
     return ans;
    }
};
