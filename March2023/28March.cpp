1446. Consecutive Characters
class Solution {
public:
    int maxPower(string s) {
        int i=0,j=0;
        int maxi=0;
        map<int,int>mp;

        while(j<s.size())
        {
            mp[s[j]]++;
            if(mp.size()<1)
            {
                j++;
            }

            else if(mp.size()==1)
            {
                maxi=max(maxi,j-i+1);
                j++;
                
            }
            else if(mp.size()>1)
            {
                while(mp.size()>1)
                {
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                    {
                        mp.erase(s[i]);
                    }
                    if(mp.size()==1)
                    {
                        maxi=max(maxi,j-i+1);
                    }
                    i++;
                }
                j++;
            }
        }
        return maxi;
    }
};
