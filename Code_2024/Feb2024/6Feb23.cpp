class Solution {
public:
    bool isAnagram(string s, string t) {
       map<char,int>mp;
       for(auto it:s)
       {
           mp[it]++;
       }

       int i=0;
       int count=mp.size();
       while(i<t.size())
       {
           if(mp.find(t[i])==mp.end())
           {
               return false;
           }
           else {
               mp[t[i]]--;
               if(mp[t[i]]==0)
               count--;
           }
           i++;
       }
       if(count==0)return true;
       else return false;
    }
};
