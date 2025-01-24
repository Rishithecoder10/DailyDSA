void QueueStack :: push(int x)
{
        // Your Code
        if(q1.empty()){
            q1.push(x);
        }
        else{
            while(!q1.empty()){
                int n=q1.front();
                q1.pop();
                q2.push(n);
            }
            q1.push(x);
            while(!q2.empty()){
                int n=q2.front();
                q2.pop();
                q1.push(n);
            }
        }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code 
        if(q1.empty()) return -1;
        int n=q1.front();
        q1.pop();
        return n;
}
