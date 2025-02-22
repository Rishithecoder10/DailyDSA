 Node* LCA(Node* root, Node* n1, Node* n2) {
        // code here
        if (root == NULL) return NULL;
    
    // If both values are less than root, LCA lies in left subtree
    if (n1->data < root->data && n2->data < root->data)
        return LCA(root->left, n1, n2);
    
    // If both values are greater than root, LCA lies in right subtree
    if (n1->data > root->data && n2->data > root->data)
        return LCA(root->right, n1, n2);
    
    // If one value is less and other greater, or equal to root
    // Current node is LCA
    return root;
    }
