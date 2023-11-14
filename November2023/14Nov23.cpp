class Solution {
public:
    string reverseVowels(string s) {
       stack<char>st;

       for(auto i:s)
       {
           if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
           st.push(i);

       } //outting all vowels in stack as it is LIFO datastructure and helps in reverse order

       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
           {
               s[i]=st.top();
               st.pop();
           }
       }
       //replacing each vowel with reverse occurance with help of stack
       return s;
    }
};
