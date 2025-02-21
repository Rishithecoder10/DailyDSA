 bool isBSTUtil(Node* root, long long min, long long max) {
        // Base case: an empty tree is a BST
        if (root == NULL) return true;

        // Check if current node's value is within the valid range
        if (root->data <= min || root->data >= max) return false;

        // Recursively check left and right subtrees
        // Left subtree: all values must be < root->data
        // Right subtree: all values must be > root->data
        return isBSTUtil(root->left, min, root->data) && 
               isBSTUtil(root->right, root->data, max);
    }

    bool isBST(Node* root) {
        // Call helper with the full range of possible values
        return isBSTUtil(root, LLONG_MIN, LLONG_MAX);
    }
