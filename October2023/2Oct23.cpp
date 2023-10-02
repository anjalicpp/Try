2038. Remove Colored Pieces if Both Neighbors are the Same Color

There are n pieces arranged in a line, and each piece is colored either by 'A' or by 'B'.
You are given a string colors of length n where colors[i] is the color of the ith piece.

class Solution {
public:
    bool winnerOfGame(string colors) {
      /* int n=colors.size();
       if(n<=2)return false;
       int i=0;
       int j=2;
       int countA=0;
       int countB=0;
       while(j<n)
       {
           if(colors[i]=='A'&&colors[i+1]=='A'&&colors[j]=='A')
           {
               countA++;
           }
           else if(colors[i]=='B'&&colors[i+1]=='B'&&colors[j]=='B')
           {
               countB++;
           }

           i++;
           j++;

       } 

       return countA>countB;*/

       int n=colors.size();
       int sa=0;
       int sb=0;

       for(int i=1;i<n-1;i++)
       {
           if(colors[i-1]=='A'&&colors[i]=='A'&&colors[i+1]=='A')
           {
               sa++;
           }

           else if(colors[i-1]=='B'&&colors[i]=='B'&&colors[i+1]=='B')
           {
               sb++;
           }
       }
       return sa>sb;
   }
};
