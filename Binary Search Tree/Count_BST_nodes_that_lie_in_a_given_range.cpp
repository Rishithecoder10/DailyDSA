int count1=0;
    void count(Node* root,int l,int h){
        if(root==NULL) return;
        count(root->left,l,h);
        if(root->data>=l&&root->data<=h) count1++;
        count(root->right,l,h);
    }
    int getCount(Node *root, int l, int h) {
        // your code here
        count(root,l,h);
        return count1;
    }
