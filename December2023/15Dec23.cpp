1436. Destination City

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        //logic:put in map and count occcurance only destination has 1 count
        map<string,int>mp;
        string ans="";
        int k=1;

        for(auto it:paths)
        {
            for(auto id:it)
           {
               mp[id]=mp[id]+k;
               k=-k;
           }

        }
        for(auto it:mp)
        {
            if(it.second==-1)
            {
                ans+=it.first;
            }
        }
        return ans;
    }
};
