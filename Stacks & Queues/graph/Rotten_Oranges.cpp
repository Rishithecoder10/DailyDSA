 int orangesRotting(vector<vector<int>>& mat) {
    int rows = mat.size();
    int cols = mat[0].size();
    queue<pair<pair<int, int>, int>> q; // ((row, col), time)
    int freshCount = 0, time = 0;

    // Step 1: Add all initial rotten oranges to the queue and count fresh oranges
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] == 2) {
                q.push({{i, j}, 0}); // Rotten orange
            } else if (mat[i][j] == 1) {
                freshCount++; // Fresh orange
            }
        }
    }

    // Directions for adjacent cells: up, down, left, right
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    // Step 2: Perform BFS
    while (!q.empty()) {
        auto curr = q.front();
        q.pop();

        int r = curr.first.first;
        int c = curr.first.second;
        time = curr.second;

        // Check all 4 possible directions
        for (auto dir : directions) {
            int newRow = r + dir.first;
            int newCol = c + dir.second;

            // If the cell is within bounds and contains a fresh orange
            if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols && mat[newRow][newCol] == 1) {
                mat[newRow][newCol] = 2; // Rot the orange
                freshCount--; // Decrease the fresh orange count
                q.push({{newRow, newCol}, time + 1}); // Add to the queue with incremented time
            }
        }
    }

    // Step 3: Check if there are any fresh oranges left
    if (freshCount > 0) return -1;

    return time;
}
