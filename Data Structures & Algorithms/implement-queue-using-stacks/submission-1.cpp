class MyQueue {
public:
    stack<int>ip;
    stack<int>op;
    MyQueue() {
    }
    
    void push(int x) {
        ip.push(x);
    }
    
    int pop() {
        moveElements();
        int element=op.top();
        op.pop();
        return element;
        
    }
    
    int peek() {    
        moveElements();
        return op.top();
        
    }
    
    bool empty() {
        return ip.empty() && op.empty();
    }
private: // transfers input to output if output is empty 
    void moveElements(){ // ip-> 10 20 30 then op-> 30 20 10
        if(op.empty()){
            while(!ip.empty()){
                op.push(ip.top());
                ip.pop();
            }
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */