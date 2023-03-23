class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> mp;
        for(auto it:p)
        {
            mp[it]++;
        }

        int i=0,j=0;
        vector<int> ans;
        int count=mp.size();
        int k=p.size();
        while(j<s.size())
        {
            if(mp.find(s[j])!=mp.end())
            {
                mp[s[j]]--;
                if(mp[s[j]]==0)
                count--;

            }
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                if(count==0)
                {
                    ans.push_back(i);
                }

                if(mp.find(s[i])!=mp.end())
                {
                    mp[s[i]]++;
                    
                }
                if(mp[s[i]]==1)
                {
                    count++;
                }
                i++;
                j++;
            }
            
        }
        return ans;
    }
};

problem 567
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    map<char,int>mp;
     for(auto it:s1)
     {
         mp[it]++;
     } 

     int i=0,j=0,ans=0;
     int k=s1.size();
     int count=mp.size();

     while(j<s2.size())
     {
         if(mp.find(s2[j])!=mp.end())
         {
             mp[s2[j]]--;
             if(mp[s2[j]]==0)
             {
                 count--;
             }
         }

         if(j-i+1<k)
         {
             j++;
         }
         else if(j-i+1==k)
         {
             if(count==0)
             {
                 ans++;
             }
             if(mp.find(s2[i])!=mp.end())
             {
                 mp[s2[i]]++;
                 if(mp[s2[i]]==1)
                 count++;
             }
             i++;j++;
         }
     } 
    if(ans)return true;
    else return false; 
    }
};
