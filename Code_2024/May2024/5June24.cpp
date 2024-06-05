class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        map<char,int>mp;
        for(auto i:words)
        {for(auto j:i)
        {
            mp[j]++;
        }
        }

        vector<string> ans;
         for(auto it:mp)
         {
             if(it.second>=3)
             {
                 while(it.second/3>0)
                 {
                     string a="";
                     a.push_back(it.first);
                     ans.push_back(a);
                     it.second=it.second-3;
                 }
             }
         }
         return ans;
    }
};
