void rotate(vector<vector<int> >& mat) {
    // Your code goes here
    int row=mat.size();
    int columm=mat[0].size();
    int i=0,j=0;
    int data=mat[i][j];
    for(int k=0;k<row*columm;k++){
        int new_i=j;
        int new_j=row-i-1;
        int temp=mat[new_i][new_j];
        mat[new_i][new_j]=data;
        data=temp;
        i=new_i;
        j=new_j;
    }
} // ama haji ek matrix ni jaruu pade ka ja ka a visit thai gayu 6a 
