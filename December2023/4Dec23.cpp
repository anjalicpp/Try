class Solution {
public:
    string largestGoodInteger(string num) {
     /*Error Soution
      string ans="";
      map<char,int>mp;
      char ans_char;
      int flag=0;
      int maxi=0;

      for(auto it: num)
      {
          mp[it]++;
          if(mp[it]>=3)
          {
              flag=1;
              int maxi=(maxi,(it-'0'));
               ans_char=char(maxi);
              
          }
    
        
      }   
      
      if(flag==0)return ans;
      ans+=ans_char;
      ans+=ans_char;
      ans+=ans_char;
      return ans;*/
     int result = -1;
        for (int i = 0; i + 2 < num.length(); i++) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                result = std::max(result, num[i] - '0');
            }
        }
        return (result == -1) ? "" : std::string(3, '0' + result);
      
    }
};
