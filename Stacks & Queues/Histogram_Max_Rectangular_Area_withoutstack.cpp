int getMaxArea(vector<int>& arr) {
    // Handle empty array
    if(arr.empty()) {
        return 0;
    }
    
    int n = arr.size();
    int maxArea = 0;
    
    for(int i = 0; i < n; i++) {
        // Find the leftmost boundary
        int left = i;
        while(left > 0 && arr[left-1] >= arr[i]) {
            left--;
        }
        
        // Find the rightmost boundary
        int right = i;
        while(right < n-1 && arr[right+1] >= arr[i]) {
            right++;
        }
        
        // Calculate area
        int width = right - left + 1;
        int area = arr[i] * width;
        
        // Update max area
        maxArea = max(maxArea, area);
    }
    
    return maxArea;
}
