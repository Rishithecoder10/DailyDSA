vector<int> num;
    void inorder(Node* root){
        if(root==NULL) return;
        inorder(root->left);
        num.push_back(root->data);
        inorder(root->right);
    }
    int kthLargest(Node *root, int k) {
        // Your code here
        inorder(root);
        int n=num.size();
        return num[n-k];
    }
