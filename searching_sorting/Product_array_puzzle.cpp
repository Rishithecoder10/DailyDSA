vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n=arr.size();
        int zerocount=0;
        vector<int> ans(n);
        long long total=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                zerocount++;
            }
            else{
                total*=arr[i];
            }
            
        }
        
        if(zerocount>1){
            return vector<int> (n,0);
        }
        
        if(zerocount==1){
            for(int i=0;i<n;i++){
                if(arr[i]==0){
                    ans[i]=total;
                }
            }
            return ans;
        }
        for(int i=0;i<arr.size();i++){
            ans[i]=total/arr[i];
        }
        return ans;
    }
