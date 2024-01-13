1347. Minimum Number of Steps to Make Two Strings Anagram

class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp;
        for(auto it:s)
        {
            mp[it]++;//keeping count of frequencies in s
        
        }
        int ans=0;

        for(auto it:t)
        {
            if(mp.find(it)==mp.end())//checking corresponding charcters in t
            {
                ans++;
            }
            else
            {
                mp[it]--;
                if(mp[it]==0)
                {
                    mp.erase(it);
                }
            }
        }
        return ans;
    }
};
