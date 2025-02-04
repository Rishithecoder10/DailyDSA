vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        
        vector<vector<int>> vt;
        if(root==NULL) return vt;
        queue<Node*> pq;
        pq.push(root);
        while(!pq.empty()){
            int n=pq.size();
            vector<int> temp;
            for(int i=0;i<n;i++){
                temp.push_back(pq.front()->data);
                if(pq.front()->left) pq.push(pq.front()->left);
                if(pq.front()->right) pq.push(pq.front()->right);
                
                pq.pop();
            }
            vt.push_back(temp);
        }
        return vt;
    }
