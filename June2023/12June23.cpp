/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:int binarysearch(int num,int n)
{
int s=num,e=n;
        int mid=s+(e-s)/2;
        while(s<=e)
        {
            if(guess(mid)==0)
            {return mid;}
            
            else if(guess(mid)==1)
            {s=mid+1;}
            
            else{
                e=mid-1;
            }
            
                mid=s+(e-s)/2;
        }
         return mid;   
}
    
    int guessNumber(int n) {
     
        int a=guess(n/2);
        if(a==-1)
        {
           return binarysearch(1,n/2);
        
        }
        else if(a==1)
        {
           return binarysearch(n/2,n);
        }
        else return n/2;
    }
   
};
