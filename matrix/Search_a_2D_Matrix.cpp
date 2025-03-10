class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        if(row==0) return false;
        int columm=matrix[0].size();
        if(columm==0) return false;
        int r=0;
        while(row>r){
            if(matrix[r][columm-1]<target){
                r++;
            }
            else{
                break;
            }
        }
        if(r == row) return false;
        int left = 0;
    int right = columm - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (matrix[r][mid] == target) {
            return true;
        } else if (matrix[r][mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    return false;
    }
};
