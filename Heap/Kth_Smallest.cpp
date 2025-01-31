 int kthSmallest(vector<int> &arr, int k) {
        // code here
        int ans;
        priority_queue<int, vector<int>, greater<int>> minHeap(arr.begin(), arr.end());
        while(k--){
            ans=minHeap.top();
            minHeap.pop();
        }
        return ans;
    }
