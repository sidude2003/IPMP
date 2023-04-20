class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        input.push(x);
    }

    int dequeue() {
        if(input.empty()){
            return -1;
        }
        
        while(input.size()!=1){
            output.push(input.top());
            input.pop();
        }
        
        int temp = input.top();
        
        input.pop();
        
        while(!output.empty()){
            input.push(output.top());
            output.pop();
        }
        
        return temp;
    }
};