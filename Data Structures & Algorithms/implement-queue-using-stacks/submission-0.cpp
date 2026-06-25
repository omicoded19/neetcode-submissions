class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    MyQueue() {
    }
    void push(int x) {
        input.push(x);
    }
    int pop() {
        moveElements();
        int element = output.top();
        output.pop();

        return element;
    }
    int peek() {
        moveElements();
        return output.top();
    }
    bool empty() {
        return input.empty() && output.empty();
    }

private:
    void moveElements() {
        if(output.empty()) {
            while(!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
    }
};