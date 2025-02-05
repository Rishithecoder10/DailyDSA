int height(Node* curr,int &diameter){
        if(curr==NULL) return 0;
        int lh=height(curr->left,diameter);
        int rh=height(curr->right,diameter);
        diameter=max(diameter,lh+rh);
        return 1+max(lh,rh);
    }
    int diameter(Node* root) {
        // Your code here
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
