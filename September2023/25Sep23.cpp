class Solution {
public:
    char findTheDifference(string s, string t) {
      /*  int res=0;
      for(auto i:s)res=i^res;
       for(auto i:t)res=i^res;
       return res;*///bitwise approach

       map<char,int>m;
       for(auto i:s)
       {
           m[i]++;
       }
       for(auto i:t)
       {
           
           if(--m[i]<0)return i;
            
       }
return'\0';
    }
};
