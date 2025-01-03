 long long countTriplets(int n, long long sum, long long arr[]) {
        // Your code goes here
        sort(arr,arr+n);
        int count=0;
        for(int i=0;i<n;i++){
            int left=i+1,right=n-1;
            while(left<right){
                int plus=arr[i]+arr[left]+arr[right];
                if(plus<sum){
                    count+=(right-left);
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return count;
    }
