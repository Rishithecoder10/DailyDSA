 Node* lca(Node* root, int n1, int n2) {
        // Your code here
        if(root==NULL||root->data==n1||root->data==n2){
            return root;
        }
        
        Node* l=lca(root->left,n1,n2);
        Node* r=lca(root->right,n1,n2);
        
        if(l==NULL) return r;
        else if(r==NULL) return l;
        else return root;
    }
