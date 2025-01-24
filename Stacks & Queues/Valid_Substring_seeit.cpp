 int findMaxLen(string& s) {
        // code here
        stack<int> st;
        int n=s.length();
        int maxlen=0;
        st.push(-1);
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                else{
                    int len=i-st.top();
                    maxlen=max(maxlen,len);
                }
                
            }
        }
        return maxlen;
    }
