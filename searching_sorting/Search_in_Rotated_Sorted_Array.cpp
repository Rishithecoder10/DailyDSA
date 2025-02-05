int search(vector<int>& arr, int target) {
        int left=0,right=arr.size()-1;
        while(left<=right){
            int mid=left+((right-left)/2);
            if(arr[mid]==target){
                return mid;
            }

            if(arr[left]<=arr[mid]){
                if(arr[left]<=target && target<arr[mid]){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            else{
                if(arr[mid]<=target && arr[right]>target){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
        }
        return -1;
    }
