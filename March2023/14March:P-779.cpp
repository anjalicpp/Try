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


