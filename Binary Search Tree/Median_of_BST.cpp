vector<int> num;

void inorder(Node* root) {
    if(root == NULL) return;
    inorder(root->left);
    num.push_back(root->data);
    inorder(root->right);
}

float findMedian(struct Node *root) {
    // Clear the vector before starting
    num.clear();
    
    // Perform inorder traversal to get sorted values
    inorder(root);
    
    int n = num.size();
    float ans;
    
    if(n % 2 != 0) {
        // Odd number of elements
        ans = num[n/2];
    } else {
        // Even number of elements
        ans = (num[n/2] + num[(n/2)-1]) / 2.0; // Note the 2.0 to ensure float division
    }
    
    return ans;
}
