void Reverse(stack<int> &St){
        if(St.empty()){
            return;
        }
        int n=St.top();
        St.pop();
        Reverse(St);
        addatbottom(St,n);
    }
    
    void addatbottom(stack<int> &st,int x){
        if(st.empty()){
            st.push(x);
            return;
        }
        
        int topelement=st.top();
        st.pop();
        
        addatbottom(st,x);
        
        st.push(topelement);
    }
