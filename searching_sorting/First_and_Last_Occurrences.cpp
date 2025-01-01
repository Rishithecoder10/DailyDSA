vector<int> find(vector<int>& arr, int x) {
        // code here
       
        vector<int> ans={-1,-1};
        int n=arr.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+((high-low)/2);
            if(arr[mid]==x){
                ans[0]=mid;
                high=mid-1;
            }
            else if(arr[mid]>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
         low=0,high=n-1;
        while(low<=high){
            int mid=low+((high-low)/2);
            if(arr[mid]==x){
                ans[1]=mid;
                low=mid+1;
            }
            else if(arr[mid]>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
