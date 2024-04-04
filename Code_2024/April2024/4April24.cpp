class Solution {
public:
    int maxDepth(string s) {
      int ans=0,i=0;
      int n=s.size();
      int left=0,right=0;

      while(i<n)
      {
        if(s[i]=='(')left++;
        else if(s[i]==')')right++;
        ans=max(ans,left-right);
        i++;
      }  
      return ans;
    }
};
