int ans=1;
    void checkheight(Node* root,int &ma,int level){
        if(!root) return;
        if(ans==0) return;
        if(root->left==NULL&&root->right==NULL){
            if(ma==-1){
                ma=level;
            }
            else{
                if(ma!=level){
                    ans=0;
                }
            }
        }
        checkheight(root->left,ma,level+1);
        checkheight(root->right,ma,level+1);
    }
    bool check(Node *root) {
        // Your code here
        int ma=-1;
        int level=0;
        checkheight(root,ma,level);
        return ans;
    }
