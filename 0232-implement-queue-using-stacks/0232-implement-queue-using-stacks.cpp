class MyQueue {
public:
    MyQueue() {}

    /** Push element x to the back of queue. */
    void push(int x) { input.push(x); }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        // shift input to output
        if (output.empty())
            while (input.size())
                output.push(input.top()), input.pop();

        int x = output.top();
        output.pop();
        return x;
    }

    /** Get the front element. */
    int peek() {
        if (output.empty())
            while (input.size())
                output.push(input.top()), input.pop();
        return output.top();
    }

    bool empty(){return output.empty() && input.empty();}

    int size() { return (output.size() + input.size()); }

private:
    stack<int> input, output;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */