set<int> st;
    int count=0;
    void storenode(Node* root){
        if(root==NULL) return;
        storenode(root->left);
        st.insert(root->data);
        storenode(root->right);
    }
    void countpair(Node* root,int x){
        if(root==NULL) return;
        countpair(root->left,x);
        if(root->data<x){
                if(st.find(abs(root->data-x))!=st.end()){
                count++;
            }
        }
        countpair(root->right,x);
    }
    
    int countPairs(Node* root1, Node* root2, int x)
    {
        storenode(root1);
        countpair(root2,x);
        return count;
    }
