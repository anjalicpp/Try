class Solution {
public:
    int addDigits(int num) {
       if(num==0||num==9)
           return num;
        
        if(num<9&&num>0)
            return num;
        int sum=0,rem=0;
        while(num)
        {
            rem=num%10;
            sum+=rem;
            num=num/10;
            
        }
        return addDigits(sum);
        }
};
