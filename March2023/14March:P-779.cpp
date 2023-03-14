779. K-th Symbol in Grammar
Medium

class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1&&k==1)
        return 0;

        int mid=pow(2,n-1)/2;
        if(k<=mid)
        {
            return kthGrammar(n-1,k);

        }
        else {
            return (!kthGrammar(n-1,k-mid));
        }

    }
};

Sort a stack
Easy
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends



Delete middle element of a stack

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    
    void solve(stack<int>&s,int k)
    {
        if(k==0)
        {
            s.pop();
            return;
        }
        
        int temp=s.top();
        s.pop();
        k--;
        solve(s,k);
        s.push(temp);
        return;
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s,int size_of_stack)
    {
        // code here..
        int k;
        
        if(size_of_stack%2==0)
        {
            k=(size_of_stack+1)/2; 
        }
        else k=size_of_stack/2;
        solve(s,k);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends
