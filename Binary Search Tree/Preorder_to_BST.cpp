 Node* constructBST(int pre[], int& preIndex, int key, int min, int max, int size) {
    if (preIndex >= size) {
        return NULL;
    }
    
    Node* root = NULL;
    
    // Current element fits in the min-max range for BST
    if (pre[preIndex] > min && pre[preIndex] < max) {
        root = newNode(pre[preIndex]);
        preIndex++;
        
        if (preIndex < size) {
            // Construct left subtree
            root->left = constructBST(pre, preIndex, root->data, min, root->data, size);
            // Construct right subtree
            root->right = constructBST(pre, preIndex, root->data, root->data, max, size);
        }
    }
    
    return root;
}

Node* Bst(int pre[], int size) {
    int preIndex = 0;
    return constructBST(pre, preIndex, pre[0], INT_MIN, INT_MAX, size);
}
