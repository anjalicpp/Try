3. Longest Substring Without Repeating Characters
Medium
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        map<int,int>mp;
        int maxi=0;
        while(j<s.size())
        {
            mp[s[j]]++;

            if(mp.size()==j-i+1)
            {
                maxi=max(maxi,j-i+1);
                j++;
            }

            else if(mp.size()<j-i+1)
            {
                while(mp.size()<j-i+1)
                {
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                    {
                        mp.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
            
        }
        return maxi;
    }
};

problem 992
    
    
876. Substrings of Size Three with Distinct Characters
Easy
1.1K
28

    
    class Solution {
public:
    int countGoodSubstrings(string s) {
       int i=0,j=0;
       int count=0;
       map<char,int> mp;
       while(j<s.size())
       {
           mp[s[j]]++;
           if(j-i+1<3)
           {
               j++;
           }
           else if(j-i+1==3)
           {
            if(mp.size()==3)
            {
                count++;
            }
            
            mp[s[i]]--;
            if(mp[s[i]]==0)
            {
                mp.erase(s[i]);
            }
            i++;
            j++;

           }

          
       } 
       return count;
    }
};
