int countSquares(int n) {
        // code here
        int i=1,count=0;
        while(i<n){
            if(i*i<n){
                count++;
            }
            else{
                break;
            }
            i++;
        }
        return count;
    }
