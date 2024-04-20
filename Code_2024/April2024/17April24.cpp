class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        stack<int>st;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]==' ')
           {
               st.push(count);
               count=0;
           }
          else count++;
       }
        st.push(count);
       while(1)
       {
           if(st.top()!=0)return st.top();
        
        else st.pop();
       }
       return st.top();
      
    }
};
