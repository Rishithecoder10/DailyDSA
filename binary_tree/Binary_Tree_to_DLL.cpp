class Solution {
    private:
    Node* head = NULL;
    Node* prev = NULL;
    
    void convertToDLL(Node* root) {
        if (root == NULL) return;
        
        // Inorder traversal
        convertToDLL(root->left);
        
        // Process current node
        if (prev == NULL) {
            head = root;  // First node becomes head
        } else {
            // Connect current node with previous node
            root->left = prev;
            prev->right = root;
        }
        prev = root;
        
        convertToDLL(root->right);
    }
    
    public:
    Node* bToDLL(Node* root) {
        head = NULL;
        prev = NULL;
        
        // Convert tree to DLL
        convertToDLL(root);
        
        return head;
    }
};
