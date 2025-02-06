vector<int> postOrder(Node* root) {
    vector<int> ans;
    if (!root) return ans;  // Handle null root
    
    stack<Node*> st1, st2;  // Using two stacks
    st1.push(root);
    
    // First stack to second stack
    while (!st1.empty()) {
        Node* curr = st1.top();
        st1.pop();
        st2.push(curr);
        
        if (curr->left)
            st1.push(curr->left);
        if (curr->right)
            st1.push(curr->right);
    }
    
    // Second stack to answer vector
    while (!st2.empty()) {
        ans.push_back(st2.top()->data);
        st2.pop();
    }
    
    return ans;
}
