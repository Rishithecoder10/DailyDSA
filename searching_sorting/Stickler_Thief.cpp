int findMaxSum(vector<int>& arr) {
        // Your code here
       
       int n=arr.size();
       vector<int> num(n,0);
       if(n==0) return 0;
       if(n==1){
           return arr[0];
       }
       num[0]=arr[0];
       num[1]=max(arr[0],arr[1]);
       for(int i=2;i<n;i++){
           num[i]=max(num[i-1],arr[i]+num[i-2]);
       }
       return num[n-1];
    }
