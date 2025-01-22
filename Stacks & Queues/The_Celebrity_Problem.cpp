int celebrity(vector<vector<int> >& mat) {
    int n = mat.size();
    
    for(int i = 0; i < n; i++) {
        bool isKnownByAll = true;
        bool knowsNoOne = true;
        
        // Check if i knows anyone
        for(int j = 0; j < n; j++) {
            if(mat[i][j] == 1 && i != j) {
                knowsNoOne = false;
                break;
            }
        }
        
        // If i knows someone, can't be celebrity
        if(!knowsNoOne) continue;
        
        // Check if everyone knows i
        for(int j = 0; j < n; j++) {
            if(mat[j][i] == 0 && i != j) {
                isKnownByAll = false;
                break;
            }
        }
        
        // If both conditions satisfied, i is celebrity
        if(isKnownByAll && knowsNoOne) {
            return i;
        }
    }
    
    return -1;
}
