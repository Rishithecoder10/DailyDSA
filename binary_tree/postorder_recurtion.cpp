vector<int> ans;
    vector<int> postOrder(Node* root) {
        // Your code here
        if(root==NULL) return ans;
        postOrder(root->left);
        postOrder(root->right);
        ans.push_back(root->data);
        return ans;
    }
