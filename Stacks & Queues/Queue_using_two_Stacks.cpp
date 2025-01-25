void StackQueue :: push(int x)
{
    // Your Code
    if(s1.empty()){
        s1.push(x);
    }
    else{
        while(!s1.empty()){
            int n=s1.top();
            s1.pop();
            s2.push(n);
        }
        s1.push(x);
        while(!s2.empty()){
            int n=s2.top();
            s2.pop();
            s1.push(n);
        }
    }
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code 
        if(s1.empty()) return -1;
        int n=s1.top();
        s1.pop();
        return n;
}
