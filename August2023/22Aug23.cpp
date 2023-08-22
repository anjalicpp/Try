168. Excel Sheet Column Title

Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 class Solution {
public:
    string convertToTitle(int columnNumber) {
    string ans;
    while(columnNumber!=0)
    {
        if(columnNumber%26!=0)
        {
            int x=columnNumber%26;
            ans.push_back(x+64);//ASCII VALUE
            columnNumber=columnNumber/26;
            
        }
        else{
            //divided by 26
            ans.push_back('Z');
            int x=columnNumber/26;
            columnNumber=x-1;
            }
    } 
    reverse(ans.begin(),ans.end());

    return ans;
    }
};

171. Excel Sheet Column Number
Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size();
        int ans=0;

        for(auto it:columnTitle)
        {
            int x=it-'A'+1;
            ans=ans*26+x;

        } 
        return ans;
    }
};
 
