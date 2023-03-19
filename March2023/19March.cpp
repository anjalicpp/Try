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
