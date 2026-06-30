class MyStack {
public:
    queue<int>q;
    MyStack() {  
    }
    
    void push(int x) { // maan lo seq hai 10 20
        q.push(x); // new element aaya 30 -> 10 20 30 
        int n=q.size(); // hum size check krenge 3 hai pr 30 front mai chaiye
        for(int i=0;i<n-1;i++){ // loop lagaya for staring two elements
            q.push(q.front()); // push to peeche hi hota so -> 10 20 30 10 20
            q.pop(); // ab aage k hata denge -> 30 10 20
        }
    }
    int pop() {
        int element=q.front();
        q.pop();
        return element;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */