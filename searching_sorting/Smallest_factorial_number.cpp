 int countzero(int mid){
        int demo=5;
        int zero=0;
        while(mid>=demo){
            zero+=(mid/demo);
            demo=demo*5;
        }
        return zero;
    }
    public:
        int findNum(int n)
        {
            //complete the function here
            int high=n*5;
            int low=0;
            int ans=0;
            while(low<=high){
                int mid=low+(high-mid)/2;
                if(countzero(mid)>=n){
                    ans=mid;
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            return ans;
        }
