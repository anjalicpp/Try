class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
        int i=0;
        stack<char>st;
        while(i<n)
        {
           if(st.empty())st.push(s[i]);
           else if(abs(st.top()-s[i])==32)st.pop();
           else st.push(s[i]);
            i++;
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
