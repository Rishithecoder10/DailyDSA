queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        int n=q.size();
        stack<int> st;
        //  k = min(k, n);
        for(int i=0;i<k;i++){
            int n0=q.front();
            q.pop();
            st.push(n0);
        }
        for(int i=0;i<k;i++){
            int n1=st.top();
            st.pop();
            q.push(n1);
        }
        for(int i=0;i<n-k;i++){
            int n2=q.front();
            q.pop();
            q.push(n2);
        }
        return q;
    } 
