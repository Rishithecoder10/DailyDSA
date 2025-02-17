Node* findLCA(Node* root, int a, int b) {
        if (root == NULL || root->data == a || root->data == b)
            return root;
            
        Node* left = findLCA(root->left, a, b);
        Node* right = findLCA(root->right, a, b);
        
        if (left && right) return root;
        return (left != NULL) ? left : right;
    }
    
    // Helper function to find distance from LCA to node
    int findLevel(Node* root, int key, int level) {
        if (root == NULL) return -1;
        if (root->data == key) return level;
        
        int left = findLevel(root->left, key, level + 1);
        if (left != -1) return left;
        
        return findLevel(root->right, key, level + 1);
    }
    
    public:
    int findDist(Node* root, int a, int b) {
        // Find LCA first
        Node* lca = findLCA(root, a, b);
        
        // Find distances from LCA to both nodes
        int d1 = findLevel(lca, a, 0);
        int d2 = findLevel(lca, b, 0);
        
        // Return sum of distances
        return d1 + d2;
    }
