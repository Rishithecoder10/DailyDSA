int maxSum;
    bool isFirst = true;
    
    int postOrderTraversal(Node* node) {
        if (!node) return 0;
        
        int leftSum = postOrderTraversal(node->left);
        int rightSum = postOrderTraversal(node->right);
        
        int currentSum = node->data + leftSum + rightSum;
        
        // For first node, initialize maxSum
        if (isFirst) {
            maxSum = currentSum;
            isFirst = false;
        } else {
            maxSum = max(maxSum, currentSum);
        }
        
        return currentSum;
    }
    
public:
    int findLargestSubtreeSum(Node* root) {
        if (!root) return 0;
        isFirst = true;
        postOrderTraversal(root);
        return maxSum;
    }
