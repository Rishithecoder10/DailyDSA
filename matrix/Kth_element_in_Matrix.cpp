int count(int mat[MAX][MAX], int val, int n) {
    int c = 0;
    for(int i = 0; i < n; i++) {
        // Count elements <= val in this row
        int j = 0;
        while(j < n && mat[i][j] <= val)
            j++;
        c += j;
    }
    return c;
}

int kthSmallest(int mat[MAX][MAX], int n, int k) {
    int min = mat[0][0];
    int max = mat[n-1][n-1];
    
    while(min < max) {
        int mid = min + (max - min) / 2;
        int count_val = count(mat, mid, n);
        
        if(count_val < k)
            min = mid + 1;
        else
            max = mid;
    }
    
    return min;
}
