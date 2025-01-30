 vector<int> maxOfSubarrays(vector<int>& arr, int k) {
    vector<int> ans;
    int n = arr.size();
    deque<int> dq;  // stores indices
    
    // Process first k elements
    for(int i = 0; i < k; i++) {
        // Remove elements smaller than current
        while(!dq.empty() && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    
    // Add first window's maximum
    ans.push_back(arr[dq.front()]);
    
    // Process rest of the elements
    for(int i = k; i < n; i++) {
        // Remove elements outside window
        while(!dq.empty() && dq.front() <= i-k) {
            dq.pop_front();
        }
        
        // Remove elements smaller than current
        while(!dq.empty() && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }
        
        dq.push_back(i);
        ans.push_back(arr[dq.front()]);
    }
    
    return ans;
}
