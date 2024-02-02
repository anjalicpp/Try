class Solution {
public:
    bool isValid(string s) {
      stack<int> st;
        if(s.size()==1)return false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')//opening bracket ko push kro
            {
                st.push(s[i]);
                
            }
            else{
                if(st.empty()) return false;//stack empty wala case
                
                char c=st.top();
                st.pop();
                
                if((c=='('&&s[i]!=')')||(c=='{'&&s[i]!='}')||(c=='['&&s[i]!=']'))
                return false;
            }
            
        }
        if(st.empty())return true;
        
        else return false;
        
    }
};
