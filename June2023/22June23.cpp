50. Pow(x, n)
Medium
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)return 1;
        if(n==1)return x;
        if(n>0)//positive powers
        {
            if(n%2==0)//even power
            return myPow(x*x,n/2);
            else return x*myPow(x*x,n/2);
        }
        else{//negative case
            n=abs(n);//to convert into positive integer
            if(n%2==0)return 1/(myPow(x*x,n/2));
            else return 1/(x*myPow(x*x,n/2));
        }
    }
};
