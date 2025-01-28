vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        vector<int> st;
        int n=arr.size();
        for(int i=0;i<=n-k;i++){
            int flag=0;
            int num=0;
            int j=i;
            while(num<k){
                if(arr[j]<0){
                    st.push_back(arr[j]);
                    flag=1;
                    break;
                }
                num++;
                j++;
            }
            if(flag==0){
                st.push_back(0);
            }
        }
        return st;
    }