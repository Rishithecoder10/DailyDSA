int checkheight(Node* root){
        if(root==NULL) return 0;
        
        int lh=checkheight(root->left);
        int rh=checkheight(root->right);
        
        if(lh==-1||rh==-1) return -1;
        
        if(abs(lh-rh)>1){
            return -1;
        }
        
        return 1 + max(lh,rh);
    }
    bool isBalanced(Node* root) {
        // Code here
        return checkheight(root)!=-1;
    }
