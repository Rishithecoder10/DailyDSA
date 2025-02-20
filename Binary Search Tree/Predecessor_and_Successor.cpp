 void findPreSuc(Node* root, Node*& pre, Node*& suc, int key) {
    // Initialize predecessor and successor as NULL
    pre = suc = NULL;
    
    if (root == NULL) return;

    // Find successor
    Node* curr = root;
    while (curr != NULL) {
        if (key >= curr->key) {
            curr = curr->right;
        } else {
            suc = curr;
            curr = curr->left;
        }
    }
    
    // Find predecessor
    curr = root;
    while (curr != NULL) {
        if (key <= curr->key) {
            curr = curr->left;
        } else {
            pre = curr;
            curr = curr->right;
        }
    }
}
