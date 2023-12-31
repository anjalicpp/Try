1624. Largest Substring Between Two Equal Characters
//Got DecBadge Today....:)
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
       map<char,pair<int,int>>mp;//map<char,pair<first_occurance,last_occurance>>
       int ans=-1;

       for(int i=0;i<s.length();i++)
       {
           if(mp.find(s[i])!=mp.end())
           {
               mp[s[i]].second=i;
           }
           else{
               mp[s[i]].first=i;
           }
           ans=max(mp[s[i]].second-mp[s[i]].first-1,ans);
       } 
       return ans;
    }
};
