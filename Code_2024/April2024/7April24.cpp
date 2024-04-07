class Solution {
public:
    bool checkValidString(string s) {
      
      stack<char>st;
      int count=0;
      for(auto it:s)
      {
        if(it=='(')
        {
            st.push('(');
        }
        else if(it==')')
        {
            if(!st.empty())
            st.pop();
            else count--;
        }
        else
        count++;
      } 

      while(!st.empty())
      {
        st.pop();
        count--;
      } 

      if(st.empty()&&count>=0)
      return true;

      else return false;
    }
};
