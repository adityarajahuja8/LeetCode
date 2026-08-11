class MinStack {

public:
    int arr[INT_MAX],arr2[INT_MAX];
    int topx=-1,top2=-1;
    MinStack() {
        
    }
    // int m=INT_MAX;
    void push(int value) {
        
        topx++;
        top2++;
        
        if(top2==0){
            arr2[top2]=value;
        }
        else{
            arr2[top2]=min(value,arr2[top2-1]);
        }
        arr[topx]=value;

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