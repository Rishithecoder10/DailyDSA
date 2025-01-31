int kthLargest(vector<int> &arr, int k) {
        // code here
        int ans;
        priority_queue<int> pq;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=arr[j];
                pq.push(sum);
            }
        }
        while(k--){
            ans=pq.top();
            pq.pop();
        }
        return ans;
    }
