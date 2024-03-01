2864. Maximum Odd Binary Number
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
      int ones=0,zeros=0;
      string ans="";

      for(auto it:s)
      {
          if(it=='0')zeros++;
          else ones++;
      }  
        
        ones--;
        
      while(ones--)
      {
          ans+="1";
      }

      while(zeros--)
      {
         ans+="0"; 
      }
      ans+="1";
      return ans;
    }
};
