class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;
      for(auto it:s)
      {
          if(it=='#'&&!s1.empty())
          {
              s1.pop();
          }
          else if(it=='#'&&s1.empty())
          {
              continue;
          }
          else s1.push(it);
      }  

       for(auto it:t)
      {
          if(it=='#'&&!s2.empty())
          {
              s2.pop();
          }
          else if(it=='#'&&s2.empty())
          {
              continue;
          }
         else s2.push(it);
      } 
      if(s1.size()==0&&s2.size()==0)return true;

      while(!s1.empty()&&!s2.empty())
      {
          if(s1.top()!=s2.top())return false;

          s1.pop();
          s2.pop();
      } 

      if(s1.size()==0&&s2.size()==0)return true;
       return false;
    }
};
