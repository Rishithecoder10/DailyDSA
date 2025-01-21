void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	int n1=s.size();
	return n1==n?true:false;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	int n=s.size();
	return n==0?true:false;
}

int pop(stack<int>& s){
	// Your code goes here
	if(s.empty()){
	    return -1;
	}
	int num=s.top();
	s.pop();
	return num;
}

int getMin(stack<int>& s){
	// Your code goes here
	
	int min=2147483647;
	while(!s.empty()){
	    if(s.top()<min){
	        min=s.top();
	    }
	    s.pop();
	}
	return min;
}
