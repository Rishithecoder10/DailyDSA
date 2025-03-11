int median(vector<vector<int>> &mat) {
        // code here
        vector<int> vt;
        int row=mat.size();
        int columm=mat[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<columm;j++){
                vt.push_back(mat[i][j]);
            }
        }
        sort(vt.begin(),vt.end());
        int n=vt.size();
        return vt[(n/2)];
    }
