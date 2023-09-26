class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int>mp;//keep account of last occurance of index of each character
        unordered_set<char>vis;//keep cout for visited ones

        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]=i;
        }

        stack<char>st;

        for(int i=0;i<s.length();i++)
        {
            if(vis.find(s[i])!=vis.end())
            {
                //if its already visited skip it
                continue;
            }

            while(!st.empty()&&s[i]<st.top()&&i<mp[st.top()])
            {
                //erase it from stack as well as visited 
                vis.erase(st.top());
                st.pop();
    
            }
            vis.insert(s[i]);
            st.push(s[i]);
        }

            string ans="";
            while(!st.empty())
            {
                ans=st.top()+ans;
                st.pop();
            }
        
    return ans;
    }
};
