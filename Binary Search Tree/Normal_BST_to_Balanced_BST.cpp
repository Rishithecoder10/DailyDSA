void storeInorder(Node* root, vector<Node*>& nodes) {
        if (root == nullptr) return;
        
        storeInorder(root->left, nodes);
        nodes.push_back(root);
        storeInorder(root->right, nodes);
    }
    
    // Function to create balanced BST from sorted array of nodes
    Node* buildBalancedBST(vector<Node*>& nodes, int start, int end) {
        if (start > end) return nullptr;
        
        // Get middle element as root
        int mid = (start + end) / 2;
        Node* root = nodes[mid];
        
        // Recursively construct left and right subtrees
        root->left = buildBalancedBST(nodes, start, mid - 1);
        root->right = buildBalancedBST(nodes, mid + 1, end);
        
        return root;
    }
    
public:
    Node* balanceBST(Node* root) {
        // Store nodes in sorted order
        vector<Node*> nodes;
        storeInorder(root, nodes);
        
        // Construct balanced BST
        int n = nodes.size();
        return buildBalancedBST(nodes, 0, n - 1);
    }
