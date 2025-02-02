 int minCost(vector<int>& arr) {
        // code here
        if(arr.size()==1||arr.empty()){
            return 0;
        }
        int ans=0;
        
        priority_queue<int, vector<int>, greater<int>> pq;
        int n1=arr.size();
        for(int j=0;j<n1;j++){
            pq.push(arr[j]);
        }
        while(pq.size()>1){
            int num1=pq.top();
            pq.pop();
            int num2=pq.top();
            pq.pop();
            ans=ans+num1+num2;
            pq.push(num1+num2);
        }
        
        return ans;
    }
