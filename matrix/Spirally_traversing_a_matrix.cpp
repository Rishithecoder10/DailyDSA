vector<int> spirallyTraverse(vector<vector<int> > &mat) {
    vector<int> result;
    
    // Check if matrix is empty
    if (mat.size() == 0) return result;
    
    int m = mat.size();     // Number of rows
    int n = mat[0].size();  // Number of columns
    
    // Define the boundaries of the current spiral layer
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
    
    while (top <= bottom && left <= right) {
        // Traverse right (top row)
        for (int j = left; j <= right; j++) {
            result.push_back(mat[top][j]);
        }
        top++;
        
        // Traverse down (rightmost column)
        for (int i = top; i <= bottom; i++) {
            result.push_back(mat[i][right]);
        }
        right--;
        
        // Check if there are more rows to traverse
        if (top <= bottom) {
            // Traverse left (bottom row)
            for (int j = right; j >= left; j--) {
                result.push_back(mat[bottom][j]);
            }
            bottom--;
        }
        
        // Check if there are more columns to traverse
        if (left <= right) {
            // Traverse up (leftmost column)
            for (int i = bottom; i >= top; i--) {
                result.push_back(mat[i][left]);
            }
            left++;
        }
    }
    
    return result;
}
