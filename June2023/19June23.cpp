class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       vector<int>ans;
       int x;
       ans.push_back(0);
       int val=0;
       for(auto i:gain)
       {
           val+=i;
           ans.push_back(val);
       } 

        x=*max_element(ans.begin(),ans.end());
        return x;
    }
};
