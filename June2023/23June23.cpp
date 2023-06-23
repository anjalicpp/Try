7. Reverse Integer
Medium

class Solution {
public:
    int reverse(int x) {
        
        
        long long ans=0,rem=0,val=1;
        if(x<0) val=-1;
        x=abs(x);
        while(x)
        {
            rem=x%10;
            ans=ans*10+rem;
            x=x/10;
        }
        val=val*ans;
        if(val>=2147483647||val<=-2147483648)return 0;
        return int(val);
    }
};
2119. A Number After a Double Reversal
Easy
class Solution {
public:
    bool isSameAfterReversals(int num) {
     int val=num;
     int rem=0;
     int rev1=0,rev2=0;
     while(val)
     {
         rem=val%10;
         rev1=rev1*10+rem;
         val=val/10;
     } 
     while(rev1)
     {
         rem=rev1%10;
         rev2=rev2*10+rem;
         rev1=rev1/10;
     }   
     if(num==rev2)return true;
     return false;

      
    }
};
