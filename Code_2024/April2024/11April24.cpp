2259. Remove Digit From Number to Maximize Result

class Solution {
public:
    string removeDigit(string number, char digit) {
       int n=number.length();

       int last_Occur=-1;

       for(int i=0;i<n-1;i++)
       {
        if(number[i]==digit)
        {
            if(number[i]<number[i+1])
            {
                number.erase(i,1);
                return number;
            }
            last_Occur=i;
        }
       }

       if(number[n-1]==digit)
       {
        last_Occur=n-1;
       }

       number.erase(last_Occur,1);
       return number;
    }
};
