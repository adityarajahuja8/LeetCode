class MinStack {

public:
    int arr[100],arr2[100];
    int topx=-1,top2=-1;
    MinStack() {
        
    }
    int m=INT_MAX;
    void push(int value) {
        m=min(m,value);
        topx++;
        top2++;
        arr[topx]=value;
        arr2[top2]=m;
    }
    
    void pop() {
        topx--;
        top2--;
        // arr[topx];
    }
    
    int top() {
        return arr[topx];
    }
    
    int getMin() {
        return arr2[top2];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */