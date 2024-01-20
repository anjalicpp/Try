class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
     unordered_map<int, int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        int maxi = 0;
        int count = 0;
        for(auto it : mp){
            if(maxi == it.second){
                count++;
            }else if(maxi < it.second){
                maxi = it.second;
                count = 1;
            }
        }
        return maxi*count;
    }
};            
