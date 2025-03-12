vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
    // Create a 1D array to store all elements of the matrix
    vector<int> temp;
    
    // Copy all elements from the matrix to the 1D array
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            temp.push_back(Mat[i][j]);
        }
    }
    
    // Sort the 1D array
    sort(temp.begin(), temp.end());
    
    // Copy the sorted elements back to the matrix in row-major order
    int index = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            Mat[i][j] = temp[index++];
        }
    }
    
    return Mat;
}
