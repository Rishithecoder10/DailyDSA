class Solution {
public:
    bool isDeadEnd(Node *root) {
        unordered_set<int> allNodes;
        unordered_set<int> leafNodes;
        
        // Add 0 to handle the edge case for node with value 1
        allNodes.insert(0);
        
        // Collect all nodes and leaf nodes
        collectNodes(root, allNodes, leafNodes);
        
        // Check if any leaf node is a dead end
        for (int leafValue : leafNodes) {
            // For a leaf node with value x, check if both (x-1) and (x+1) exist
            if (allNodes.find(leafValue - 1) != allNodes.end() && 
                allNodes.find(leafValue + 1) != allNodes.end()) {
                return true;
            }
        }
        
        return false;
    }
    
private:
    void collectNodes(Node* root, unordered_set<int>& allNodes, unordered_set<int>& leafNodes) {
        if (!root)
            return;
        
        // Add current node value to set
        allNodes.insert(root->data);
        
        // If it's a leaf node, add to leafNodes
        if (!root->left && !root->right) {
            leafNodes.insert(root->data);
        }
        
        // Recursively process left and right subtrees
        collectNodes(root->left, allNodes, leafNodes);
        collectNodes(root->right, allNodes, leafNodes);
    }
};
