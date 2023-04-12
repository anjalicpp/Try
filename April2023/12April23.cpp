1047. Remove All Adjacent Duplicates In String
Easy

You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
           
            if(st.empty()==false&&st.top()==s[i])
            {
                st.pop();
            }
            else st.push(s[i]);
        }
        while(st.size()>0)
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};




----------------------------------------------
 class Solution {
public:
    string simplifyPath(string path) {
        int flag=0;
        stack<char>st;
        string ans="";
        for(auto it:path)
        {
            st.push(it);
            if(st.top()=='/')
            {
                flag=!flag;
                if(flag==0)
                {
                    st.pop();
                }
            }
            else if(st.top()=='.')
            {
                st.pop();
                if(st.top()=='.')
                {
                    while(st.size()>0)
                    {
                        st.pop();
                    }
                }
            }
          
        }
        while(st.size()>0)
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
--------------------------------------------------------
