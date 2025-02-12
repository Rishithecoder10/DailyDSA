vector<int> slove(Node *root){
        if(!root) return {0,0};
        vector<int> a=slove(root->left);
        vector<int> b=slove(root->right);
        if(a[0]>b[0]) return{a[0]+1,a[1]+root->data};
        if(b[0]>a[0]) return{b[0]+1,b[1]+root->data};
        else return{a[0]+1,max(a[1],b[1])+root->data};
    }
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        vector<int> ans=slove(root);
        return ans[1];
    }
