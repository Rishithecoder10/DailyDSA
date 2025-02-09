Node* treeFromString(string s) {
        int i = 0;
        return buildTree(s, i);
    }
    
private:
    Node* buildTree(string& s, int& i) {
        // Skip if we reach end or closing bracket
        if(i >= s.length() || s[i] == ')')
            return NULL;
            
        // Get the node value
        string num = "";
        while(i < s.length() && s[i] != '(' && s[i] != ')') {
            num += s[i];
            i++;
        }
        
        // Create node with extracted value
        Node* root = new Node(stoi(num));
        
        // Handle left subtree
        if(i < s.length() && s[i] == '(') {
            i++; // Skip opening bracket
            root->left = buildTree(s, i);
            i++; // Skip closing bracket
        }
        
        // Handle right subtree
        if(i < s.length() && s[i] == '(') {
            i++; // Skip opening bracket
            root->right = buildTree(s, i);
            i++; // Skip closing bracket
        }
        
        return root;
    }
