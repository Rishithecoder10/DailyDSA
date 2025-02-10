class Solution {
private:
    Node* build(vector<int>& inorder, int istart, int iend,
                vector<int>& preorder, int prestart, int preend,
                map<int,int>& imap) {
        // Base case
        if (istart > iend || prestart > preend) {
            return NULL;
        }
        
        // Create root node from current preorder element
        Node* root = new Node(preorder[prestart]);
        
        // Find position of root in inorder
        int inroot = imap[preorder[prestart]];
        // Calculate number of nodes in left subtree
        int numsLeft = inroot - istart;
        
        // Recursively build left and right subtrees
        root->left = build(inorder, istart, inroot - 1,
                          preorder, prestart + 1, prestart + numsLeft,
                          imap);
        root->right = build(inorder, inroot + 1, iend,
                           preorder, prestart + numsLeft + 1, preend,
                           imap);
        
        return root;
    }
    
public:
    Node* buildTree(vector<int>& inorder, vector<int>& preorder) {
        map<int,int> inmap;
        int n = inorder.size();
        
        // Create map of value to index for inorder array
        for(int i = 0; i < n; i++) {
            inmap[inorder[i]] = i;
        }
        
        return build(inorder, 0, n-1, preorder, 0, n-1, inmap);
    }
};
