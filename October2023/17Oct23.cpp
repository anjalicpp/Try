class Solution {
public:
    bool hasAlternatingBits(int n) {
    int rem=0;
    int flag=n%2;
    while(n)
    {
        rem=n%2;
        if(rem!=flag)return false;
        n=n/2;
        flag=!flag;

    }
     return true;  
    }
};
