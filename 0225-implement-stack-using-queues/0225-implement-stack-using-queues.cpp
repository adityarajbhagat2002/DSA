class MyStack {
public:
    queue<int> a;
    
    
    MyStack() {
        
        
    }
    
    void push(int x) {
        a.push(x);
        
        
        
    }
    
    int pop() {
        int n=a.size();
        while(n>1){
            int temp=a.front();
            a.pop();
            a.push(temp);
        n--;
        }
        int ans=a.front();
        a.pop();
        return ans;
    }
    
    int top() {
          int n=a.size();
        while(n>1){
            int temp=a.front();
            a.pop();
            a.push(temp);
        n--;
        }
        int ans=a.front();
        a.pop();
        a.push(ans);
        return ans;
        
        
    }
    
    bool empty() {
        return a.empty();
        
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