vector<int> ans;
    vector<int> inOrder(Node* root) {
        // Your code here
        if(root==NULL) return ans;
        inOrder(root->left);
        ans.push_back(root->data);
        inOrder(root->right);
        return ans;
    }
