 public:
     Node* prev = NULL;
    
    void populateNextUtil(Node* node) {
        if (node == NULL) return;
        
        // First recur on left subtree
        populateNextUtil(node->left);
        
        // Set the next pointer of previous node
        if (prev != NULL) {
            prev->next = node;
        }
        
        // Update prev for next node
        prev = node;
        
        // Recur on right subtree
        populateNextUtil(node->right);
    }
    
public:
    void populateNext(Node* root) {
        // Initialize prev as NULL before starting
        prev = NULL;
        
        // Call the helper function
        populateNextUtil(root);
    }
