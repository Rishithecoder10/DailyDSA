 int toSumTreeHelper(Node *node) {
        if (node == NULL)
            return 0; // Base case: Null nodes contribute 0
    
        // Recursively transform left and right subtrees
        int lsum = toSumTreeHelper(node->left);
        int rsum = toSumTreeHelper(node->right);
    
        int oldValue = node->data;  // Store the original value
    
        // Update node's data to sum of left and right subtree sums
        node->data = lsum + rsum;
    
        // Return total sum (including old value) to the parent
        return oldValue + lsum + rsum;
    }

// Wrapper function that calls the helper
    void toSumTree(Node *node) {
        toSumTreeHelper(node);
    }
