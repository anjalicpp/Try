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
