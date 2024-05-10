class Solution {
public:
    int myAtoi(string s) {
     int i=0;
     int sign=1;
     long ans=0;
     //checking for sign

     while(i<s.length()&&s[i]==' ')
     {
        i++;//breaks when we encounter first sign chaharcter
     }   

     if(s[i]=='+')
     {
        sign=1;
        i++;
     }
     else if(s[i]=='-')
    {
        sign=-1;
        i++;

    }

    while(i<s.length())
    {
        if(s[i]>='0'&&s[i]<='9')//it is a digit
        {
            ans=ans*10+(s[i]-'0');
            {
                if(ans>INT_MAX&&sign==-1)//overflow conditions
                {
                    return INT_MIN;
                }
                else if(ans>INT_MAX&&sign==1)
                {
                    return INT_MAX;
                }
            }
            i++;
        }
        else{
            return ans*sign;
        }
    }
        return ans*sign;
    }
};