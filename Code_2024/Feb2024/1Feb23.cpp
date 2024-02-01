class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();

       /* for(int i=1;i<=n/2;i++)//i=n/2because at max matching string will be half the length
        {
            if(n%i==0)
            {
                string sub=s.substr(0,i);
                string temp="";
                int no_Of_repeatation=n/i;

                for(int j=0;j<no_Of_repeatation;j++)
                {
                    temp+=sub;//adding substring no of repetation times to get the original string
                }
                if(temp==s)return true;
            }
        }
        return false;*/

      /*  if(n%2!=0)return false;

        for(int i=0,k=n/2;i<n/2;i++,k++)
        {
           if(s[i]!=s[k])return false;
        }
        return true;*/
    }
};
