1296. Divide Array in Sets of K Consecutive Numbers
class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k)return false;
        sort(nums.begin(),nums.end());

        map<int,int>mp;

        for(auto it:nums)
        {
            mp[it]++;
        }
        int n=nums.size();

        while(n--)
        {
            for(auto it:mp)
            {
                int a=it.first;

                for(int i=a;i<a+k;i++)
                {
                   if(mp[i]==0)return false;
                   else mp[i]--;

                   if(mp[i]==0)mp.erase(i);
                    
                }
                break;
            }
        }
        return true;
    }
};
