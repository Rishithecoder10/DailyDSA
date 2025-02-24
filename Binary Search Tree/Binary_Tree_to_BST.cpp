 void getValues(Node* root, vector<int>& values) {
        if (root == nullptr) return;
        
        // Store current node value
        values.push_back(root->data);
        
        // Recursively get values from left and right subtrees
        getValues(root->left, values);
        getValues(root->right, values);
    }
    
    // Index to keep track of current value during inorder traversal
    int index = 0;
    
    // Function to fill sorted values back into tree
    void convertToBST(Node* root, vector<int>& sortedValues) {
        if (root == nullptr) return;
        
        // Inorder traversal to fill values
        convertToBST(root->left, sortedValues);
        root->data = sortedValues[index++];
        convertToBST(root->right, sortedValues);
    }
    
public:
    Node* binaryTreeToBST(Node* root) {
        // Step 1: Get all values from binary tree
        vector<int> values;
        getValues(root, values);
        
        // Step 2: Sort the values
        sort(values.begin(), values.end());
        
        // Step 3: Fill sorted values back into tree using inorder traversal
        index = 0;  // Reset index
        convertToBST(root, values);
        
        return root;
    }
