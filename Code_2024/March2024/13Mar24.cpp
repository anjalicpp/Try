2485. Find the Pivot Integer
class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)return 1;
        int sum=(n*(n+1))/2;
        int sum2=0;
        for(int i=n;i>=1;i--)
        {
           // sum=sum-i;
            sum2+=i;
            if(sum==sum2)
            {
                return i;
            }
             sum=sum-i;
        }
        return -1;
    }
};
