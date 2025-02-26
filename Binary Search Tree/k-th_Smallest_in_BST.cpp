vector<int> num;
void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    num.push_back(root->data);
    inorder(root->right);
}
int kthSmallest(Node *root, int k) {
    // Clear the vector before traversal
    num.clear();
    inorder(root);
    int n=num.size();
    return k <= n ? num[k-1] : -1;  // Fixed condition
}
