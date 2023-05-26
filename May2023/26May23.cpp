
class Solution {
public:
    bool isPalindrome(int x) {
         if(x<0)return false;
        
        else{
       long int rem,rev=0,num=x;
        while(num)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
            
        }
       if(rev==x) return true;
        return false;
    }}
    
};
