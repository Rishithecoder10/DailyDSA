vector<int> boundaryTraversal(Node *root) {
    vector<int> ans;
    if(root==NULL) return ans;
    
    // Add root only if it's not a leaf
    if(!(root->left == NULL && root->right == NULL)){
        ans.push_back(root->data);
    }
    
    // Left boundary excluding leaves
    Node* curr=root->left;
    while(curr!=NULL){
        if(!(curr->left == NULL && curr->right == NULL)) {
            ans.push_back(curr->data);
        }
        if(curr->left) curr=curr->left;
        else curr=curr->right;
    }
    
    // Leaf nodes using inorder traversal instead of level order
    addLeafNodes(root, ans);
    
    // Right boundary in reverse order
    vector<int> rightBoundary;
    curr = root->right;
    while(curr != NULL) {
        if(!(curr->left == NULL && curr->right == NULL)) {
            rightBoundary.push_back(curr->data);
        }
        if(curr->right)
            curr = curr->right;
        else
            curr = curr->left;
    }
    
    // Add right boundary nodes in reverse order
    for(int i = rightBoundary.size()-1; i >= 0; i--) {
        ans.push_back(rightBoundary[i]);
    }
    
    return ans;
}

// Helper function for leaf nodes using inorder traversal
void addLeafNodes(Node* root, vector<int>& ans) {
    if(!root) return;
    
    addLeafNodes(root->left, ans);
    
    // If current node is leaf, add it
    if(root->left == NULL && root->right == NULL) {
        ans.push_back(root->data);
    }
    
    addLeafNodes(root->right, ans);
}
