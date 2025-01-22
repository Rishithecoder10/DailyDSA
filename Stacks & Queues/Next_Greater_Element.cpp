vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        
        int n=arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&arr[st.top()]<=arr[i]){
                st.pop();
            }
            
            ans[i]=st.empty()?-1:arr[st.top()];
            
            st.push(i);
        }
        return ans;
    }
