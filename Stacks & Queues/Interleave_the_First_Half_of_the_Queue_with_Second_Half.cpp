 vector<int> rearrangeQueue(queue<int> &q){
        int n=q.size();
        vector<int> un(n);
        int i=0;
        while(i<n){
            un[i]=q.front();
            q.pop();
            i+=2;
        }
        i=1;
        while(i<n){
            un[i]=q.front();
            q.pop();
            i+=2;
        }
        return un;
    }
