 int minSwaps(vector<int>& arr) {
        // Code here
        int n=arr.size();
        int swapcount=0;
        for(int i=0;i<arr.size();i++){
            int minindex=i;
            for(int j=i+1;j<n;j++){
                if(arr[minindex]>arr[j]){
                    minindex=j;
                }
            }
            if(minindex!=i){
                swap(arr[i],arr[minindex]);
                swapcount++;
            }
        }
        return swapcount;
    }
