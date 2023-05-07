2269. Find the K-Beauty of a Number
Easy

class Solution {
public:
    int divisorSubstrings(int num, int k) {
      int i=0,j=0;
      int ans=0;
      string s=to_string(num);
      while(j<s.size())
      {
          if(j-i+1<k)
          {
              j++;
          }
          else if(j-i+1==k)
          {
            string sub=s.substr(i,k);
            int n=stoi(sub);
            if(n!=0&&num%n==0)
            {
                ans++;
            }
                i++;j++;
          }
      }
      return ans;  
    }
};
