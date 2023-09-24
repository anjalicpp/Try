class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
      unordered_map<string,int>mpp;
        for(auto &s : arr){
            mpp[s]++;
        }
        int cnt=0;
        for (auto &s : arr){
            if(mpp[s]==1){
                cnt++;
                if(cnt==k){
                    return s;
                }
            }
        }
        return "";   
    }
};
