Node* flattenBST(Node* root) {
    if (!root) return NULL;

    Node* dummy = new Node(-1); // Create a dummy node
    Node* prev = dummy; // Pointer to track the last processed node

    inorder(root, prev); // Perform in-order traversal and modify pointers

    Node* newRoot = dummy->right; // New root is the first element
    delete dummy; // Free the dummy node
    return newRoot;
}

// Helper function for in-order traversal and modification
void inorder(Node* curr, Node*& prev) {
    if (!curr) return;

    inorder(curr->left, prev); // Process left subtree

    // Modify pointers
    prev->right = curr;
    curr->left = NULL; // Ensure left child is NULL
    prev = curr;

    inorder(curr->right, prev); // Process right subtree
}
