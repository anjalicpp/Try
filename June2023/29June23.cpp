class Solution {
public:
    bool isPalindrome(string s) {
        string str;
     for(auto i:s)
     {
         if(isalnum(i))
         {
             str+=tolower(i);
         }
    } 

    int i=0;
    int j=str.length()-1;
   // if(str.length()==1)return false;
    while(i<j)
    {
        if(str[i]!=str[j])
        return false;
        i++;j--;
    }
    return true;

    }
};
