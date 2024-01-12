1704. Determine if String Halves Are Alike
class Solution {
public:
    
    bool check(char s)
    {
        if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
        return true;
        
        else return false;
    }
    bool halvesAreAlike(string s) {
    int size=s.size();
        int vow1=0,vow2=0;
        for(int i=0,j=size/2;i<size/2;i++,j++)
        {
            if(check(s[i]))
                vow1++;
            if(check(s[j]))
                vow2++;
            
        }
       return vow1==vow2; 
    }
};
