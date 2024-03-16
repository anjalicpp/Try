525. Contiguous Array
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum=0;
        int maxi=0;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)//for zero add -1 and for ones add 1
            {
                sum+=-1;
            }
            else{
                sum+=1;
            }

            if(mp.find(sum)!=mp.end())
            {
                maxi=max(maxi,i-mp[sum]);//if found on map update maxi
            }
            else{
                mp[sum]=i;//if new add to map and update its index
            }
        }
        return maxi;
    }
};
