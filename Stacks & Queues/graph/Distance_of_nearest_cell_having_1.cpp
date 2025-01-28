 vector<vector<int>> nearest(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    queue<pair<int,int>> q;
    
    // Add all 1's to queue and mark their distance as 0
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == 1) {
                dist[i][j] = 0;
                q.push({i,j});
            }
        }
    }
    
    // BFS directions
    vector<int> dx = {-1, 0, 1, 0};
    vector<int> dy = {0, 1, 0, -1};
    
    // Process queue
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        // Check all 4 directions
        for(int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];
            
            // If valid cell and new distance is shorter
            if(newX >= 0 && newX < n && newY >= 0 && newY < m && 
               dist[newX][newY] > dist[x][y] + 1) {
                dist[newX][newY] = dist[x][y] + 1;
                q.push({newX, newY});
            }
        }
    }
    return dist;
}