class Solution {
public:
    int minDeletions(string s) {
      map<char,int>mp;
      for(auto it:s)
      {
          mp[it]++;
    
      }  
      unordered_set<int>freq;
      int ans=0;

      for(auto it:mp)
      {
          int f=it.second;
          while(f>0&&freq.find(f)!=freq.end())
          {
              f--;ans++;
          }
          freq.insert(f);

      }
      return ans;
     
    }
};
