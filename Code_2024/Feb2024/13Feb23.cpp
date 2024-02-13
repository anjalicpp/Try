class Solution {
public:
    string firstPalindrome(vector<string>& words) {
      string ans="";
        int flag=0;
        
        for(auto s:words)
        {
            int l=0;
            int h=s.length()-1;
            while(l<=h)
            {
               if( s[l]!=s[h]){ flag=0;break;}
                flag=1;l++;h--;
            }
            if(flag){ans+=s;return ans;}
        }
      return ans;   
    }
};
