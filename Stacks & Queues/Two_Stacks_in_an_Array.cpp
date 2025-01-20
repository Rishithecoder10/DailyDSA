class twoStacks {
  public:
        int arr[200];
        int front1;
        int front2;
    twoStacks() {
        front1=-2;
        front2=-1;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        // code here
        front1+=2;
        arr[front1]=x;
        
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        // code here
        front2+=2;
        arr[front2]=x;
        
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        // code here
        if(front1<0){
            return -1;
        }
        int n=arr[front1];
        front1-=2;
        return n;
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
        // code here
        if(front2<0){
            return -1;
        }
        int n=arr[front2];
        front2-=2;
        return n;
    }
};
