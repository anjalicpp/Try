class MinStack {
public:stack<int>s;
        stack<int>ss;

    MinStack() {
        
    }
    
    void push(int val) {
       if(ss.size()==0||ss.top()>val)
       {
           ss.push(val);
       } 
       s.push(val);
    }
    
    void pop() {
      int temp=s.top();
      s.pop();
      if(ss.top()==temp)
      {
          ss.pop();
      }  
    }
    
    int top() {
       return s.top(); 
    }
    
    int getMin() {
       return ss.top(); 
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */


gfg 
Get minimum element from stack
MediumAccuracy: 22.59%Submissions: 204K+Points: 4
        
        //{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
    stack<int> ss;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           if(ss.size()==0)
           {
               return -1;
           }
           return ss.top();
           //Write your code here
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           if(s.size()==0)
           {
               return -1;
           }
           
           int temp=s.top();
           s.pop();
           if(ss.top()==temp)
           {
               ss.pop();
           }
           return temp;
           //Write your code here
       }
       
       /*push element x into the stack*/
       void push(int x){
           if(s.size()==0||ss.top()>=x)
           {
               ss.push(x);
           }
           s.push(x);
           
           //Write your code here
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends
