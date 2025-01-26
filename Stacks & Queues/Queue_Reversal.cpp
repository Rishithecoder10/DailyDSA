queue<int> reverseQueue(queue<int> &q) {
        // code here.
        stack<int> st;
        while(!q.empty()){
            int n=q.front();
            q.pop();
            st.push(n);
        }
        while(!st.empty()){
            int n=st.top();
            st.pop();
            q.push(n);
        }
        return q;
    }
