int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        vector<int> count;
        int row=arr.size();
        int columm=arr[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<columm;j++){
                if(arr[i][j]==1){
                    count.push_back(columm-j);
                    break;
                }
                if(arr[i][j]==0&&j==columm-1){
                    count.push_back(0);
                }
            }
        }
        int ans=0;
        int index=-1;
        int n=count.size();
        for(int i=0;i<n;i++){
            if(count[i]>ans){
                ans=count[i];
                index=i;
            }
        }
        return index;
    }
