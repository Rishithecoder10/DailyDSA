 int majorityElement(vector<int>& arr) {

        // Using Boyer-Moore Voting Algorithm
        int count=0,candidate=-1;
        for(int i=0;i<arr.size();i++){
            if(count==0){
                candidate=arr[i];
                count=1;
            }
            else if(arr[i]==candidate){
                count++;
            }
            else{
                count--;
            }
        }
        count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==candidate){
                count++;
            }
        }
        return count>arr.size()/2?candidate:-1;
       
    }
