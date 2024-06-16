29. Divide Two Integers

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor)
            return 1;

        bool sign=true;

        if(dividend>=0 && divisor<0)  sign=false;
        if(dividend<=0 && divisor>=0)  sign=false;

        long numo=abs(dividend);
        long deno=abs(divisor);
        divisor=abs(divisor);

        long quot=0;

        while(numo>=deno)
        {
            int count=0;

            while(numo>=(deno<<(count+1)))
            {
                count+=1;
            }
            quot+=1<<count;
            numo=numo-(deno<<count);
        }

        if(quot==(1<<31)&&sign==true)//edge cases
        {
            return INT_MAX;
        }
        if(quot==(1<<31)&&sign==false)
        {
            return INT_MIN;
        }
        return sign?quot:-quot;


    }
};
T.C:(logn)2
S.C:O(1)
