unordered_map<string, int> un;

string solve(Node* root) {
    if (root == NULL) return "$";
    
    // Create string representation of current node and its subtrees
    string s = "";
    
    // If it's a leaf node, return special format
    if (!root->left && !root->right) {
        return "@" + to_string(root->data);  // Using @ to mark leaf nodes
    }
    
    s = to_string(root->data);  // Current node value
    s += "(" + solve(root->left) + ")";  // Add parentheses for clear separation
    s += "(" + solve(root->right) + ")";
    
    // Only consider non-leaf subtrees
    if (root->left || root->right) {
        un[s]++;
    }
    
    return s;
}

int dupSub(Node *root) {
    un.clear();  // Clear the map for each test case
    solve(root);
    
    for (auto x : un) {
        if (x.second >= 2) {
            return 1;
        }
    }
    return 0;
}
