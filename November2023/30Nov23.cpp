class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
     int size=s1.length();
     if(size>s2.length())
     {
         size=s2.length();
     }
     if(size>s3.length())
     {
         size=s3.size();
     }
        int i=0; 

        while(i<size)
        {
            if(s1[i]!=s2[i]||s2[i]!=s3[i]||s1[i]!=s3[i])break;
            else i++;
        } 
        if(i==0)return -1;
        else return i;
    }
};
