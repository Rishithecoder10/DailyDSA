void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    // Transpose the matrix (swap rows with columns)
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    // Reverse each row to get the 90-degree clockwise rotation
    for (int i = 0; i < n; i++) {
        int left = 0, right = n - 1;
        while (left < right) {
            swap(matrix[i][left], matrix[i][right]);
            left++;
            right--;
        }
    }
}
