 vector<int> findLeastGreater(vector<int>& arr, int n) {
        vector<int> ans(n,-1);
        set<int> st;
        for(int i=n-1;i>=0;i--){
            auto it=st.upper_bound(arr[i]);
            
            if(it!=st.end()){
                ans[i]=*it;
            }
            
            st.insert(arr[i]);
        }
        return ans;
    }
