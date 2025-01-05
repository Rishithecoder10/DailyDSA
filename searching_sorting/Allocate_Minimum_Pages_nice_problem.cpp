 bool isvalid(vector<int> arr,int k,int n,int maxpage){
        int student=1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>maxpage){
                student++;
                sum=arr[i];
                if(student>k) return false;
            }
        }
        return true;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        if(n<k){
            return -1;
        }
        int sum=0;
        int maxelement=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            maxelement=max(maxelement,arr[i]);
        }
        int left=maxelement;
        int right=sum;
        int result=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(isvalid(arr,k,n,mid)){
                result=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return result;
    }
