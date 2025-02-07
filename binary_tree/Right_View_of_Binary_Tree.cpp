vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       if(root==NULL) return ans;
       queue<Node*> pq;
       pq.push(root);
       while(!pq.empty()){
           int n=pq.size();
           for(int i=0;i<n;i++){
               Node* curr=pq.front();
               pq.pop();
               if(i==n-1){
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
