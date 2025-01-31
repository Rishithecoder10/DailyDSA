vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        vector<int> ans;
        int n=arr.size();
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                minHeap.push(arr[i][j]);
            }
        }
        for(int i=0;i<n*n;i++){
            ans.push_back(minHeap.top());
            minHeap.pop();
        }
        return ans;
    }
