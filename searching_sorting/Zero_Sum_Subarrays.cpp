int findSubarray(vector<int> &arr) {
        // code here.
        // arr = [6, -1, -3, 4, -2, 2]
        // if we consider this example 
        int n=arr.size();
        unordered_map<int,int> un;
        int prefixsum=0,count=0;
        vector<int> dp(n,0);
        for(int i=0;i<n;i++){
            prefixsum+=arr[i];
            if(prefixsum==0){
                dp[i]=1;
            }
            if(un.find(prefixsum)!=un.end()){
                dp[i]+=un[prefixsum];
            }
            //we did this because here -1 -3 4 come and again 6 come it means
            //that 0 occure somewhere so that's why again it sum come 
            un[prefixsum]++;
            count+=dp[i];
        }
        return count;
    }
