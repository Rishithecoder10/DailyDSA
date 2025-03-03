int sum(Node* root, int currentNum = 0) {
    if (root == NULL) {
        return 0;
    }
    
    // Calculate current number at this node
    currentNum = currentNum * 10 + root->data;
    
    // If it's a leaf node, return the current number
    if (root->left == NULL && root->right == NULL) {
        return currentNum;
    }
    
    // Recursively calculate sum for left and right subtrees
    return sum(root->left, currentNum) + sum(root->right, currentNum);
}
