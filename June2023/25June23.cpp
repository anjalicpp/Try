class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0;
        int s=needle.size();
       while(j<haystack.size())
       {
          // return 5;
           if(needle[i]==haystack[j])
           {
                if(i==s-1)return j-s+1;

               i++;j++;
           }
           else {
               j=j-i+1;
               i=0;
           }
           //if(i==s-1)return j-s;

        }
        return -1;
    }
};
