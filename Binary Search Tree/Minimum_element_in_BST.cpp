int minValue(Node* root) {
        // Code here
        if(root->left==NULL) return root->data;
        
        int min=minValue(root->left);
        return min;
    }
