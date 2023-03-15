class Solution {
public:

    void solve(int open,int close,string op,vector <string>&ans)
    {
        if(open==0&&close==0)
        {
            ans.push_back(op);
            return;
        }

        if(open!=0)
        {
            string op1=op;
            op1.push_back('(');
            solve(open-1,close,op1,ans);
        }
        if(close>open)
        {
            string op2=op;
            op2.push_back(')');
            solve(open,close-1,op2,ans);
        }
        return;
    }

    vector<string> generateParenthesis(int n) {
      int open=n;
      int close=n;
      string op="";
      vector<string> ans;
      solve(open,close,op,ans);
        return ans;
    }
};
Console

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void printTillN(int n)
    {
        if(n==1)
        {
            cout<<n<<" ";
            return;
        }
        
        printTillN(n-1);
        cout<<n<<" ";
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.printTillN(N);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
