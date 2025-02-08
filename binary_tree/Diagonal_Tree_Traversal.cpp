 vector<int> diagonal(Node *root) {
    vector<int> ans;
    if (root == NULL) return ans;
    
    // Use queue of just Node* (we don't need to track diagonal number)
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        
        // Process current diagonal
        while (curr) {
            // Add current node to answer
            ans.push_back(curr->data);
            
            // If left child exists, add to queue for next diagonal
            if (curr->left) {
                q.push(curr->left);
            }
            
            // Move to right child (same diagonal)
            curr = curr->right;
        }
    }
    
    return ans;
}
