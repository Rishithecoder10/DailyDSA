vector<int> ans;
    vector<int> preorder(Node* root) {
        // write code here
        if(root==NULL) return ans;
        ans.push_back(root->data);
        preorder(root->left);
        preorder(root->right);
        return ans;
    }
