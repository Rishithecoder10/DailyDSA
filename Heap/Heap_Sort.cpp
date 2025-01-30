void heapSort(vector<int>& arr) {
        // code here
        priority_queue<int> pq;
        int n=arr.size();
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        for(int i=n-1;i>=0;i--){
            arr[i]=pq.top();
            pq.pop();
        }
    }
