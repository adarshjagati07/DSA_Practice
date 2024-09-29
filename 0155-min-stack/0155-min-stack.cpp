class MinStack {
public:
    MinStack() {
     int min = INT_MAX;    
    }
    void push(int val) {
        stk.push(val);
        if(minStk.empty() || val <= minStk.top()){
            minStk.push(val);
        }
    }
    
    void pop() {
        if(stk.top() == minStk.top()){
            minStk.pop();
        }
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minStk.top();
    }
private:
    stack<int> stk;
    stack<int> minStk;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */