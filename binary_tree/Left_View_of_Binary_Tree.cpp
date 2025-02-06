 vector<int> leftView(Node *root) {
        // code here
        queue<Node*> pq;
        pq.push(root);
        vector<int> ans;
        if(root==NULL) return ans;
        while(!pq.empty()){
            int size=pq.size();
            for(int i=0;i<size;i++){
                Node* curr=pq.front();
                pq.pop();
                if(i==0){
                    ans.push_back(curr->data);
                }
                if(curr->left){
                    pq.push(curr->left);
                }
                if(curr->right){
                    pq.push(curr->right);
                }
            }
        }
        return ans;
    }
