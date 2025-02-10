class Solution {
private:
    // Returns pair<isSumTree, sum>
    pair<bool, int> checkSumTree(Node* root) {
        // Base case: empty tree is a sum tree
        if (root == NULL) {
            return {true, 0};
        }
        
        // Leaf node is always a sum tree
        if (root->left == NULL && root->right == NULL) {
            return {true, root->data};
        }
        
        // Recursively check left and right subtrees
        pair<bool, int> left = checkSumTree(root->left);
        pair<bool, int> right = checkSumTree(root->right);
        
        // Current node is sum tree if:
        // 1. Both subtrees are sum trees
        // 2. Current node's value equals sum of subtrees
        bool isSumTree = left.first && right.first && 
                        (root->data == left.second + right.second);
        
        // Return if it's a sum tree and total sum including current node
        return {isSumTree, root->data + left.second + right.second};
    }
    
public:
    bool isSumTree(Node* root) {
        return checkSumTree(root).first;
    }
};
