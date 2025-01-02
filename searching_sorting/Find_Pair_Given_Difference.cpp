bool findPair(vector<int> &arr, int x) {
        // code here
        unordered_set<int> st;
        for(int i=0;i<arr.size();i++){
            if(st.find(arr[i]+x)!=st.end()||st.find(arr[i]-x)!=st.end()){
                return true;
            }
           st.insert(arr[i]);
        }
       return false;
    }
