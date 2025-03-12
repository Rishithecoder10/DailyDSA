int maxArea(vector<vector<int>> &mat) {
    if (mat.empty() || mat[0].empty()) {
        return 0;
    }
    
    int rows = mat.size();
    int cols = mat[0].size();
    vector<int> heights(cols, 0);
    int maxArea = 0;
    
    for (int i = 0; i < rows; i++) {
        // Update heights for the current row
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] == 1) {
                heights[j] += 1;
            } else {
                heights[j] = 0;
            }
        }
        
        // Calculate maximum rectangle area for the current histogram
        stack<int> s;
        for (int j = 0; j <= cols; j++) {
            int currHeight = (j == cols) ? 0 : heights[j];
            
            while (!s.empty() && currHeight < heights[s.top()]) {
                int height = heights[s.top()];
                s.pop();
                
                int width = s.empty() ? j : j - s.top() - 1;
                maxArea = max(maxArea, height * width);
            }
            
            if (j < cols) {
                s.push(j);
            }
        }
    }
    
    return maxArea;
}
