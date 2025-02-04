int height(Node* root) {
    if (!root) return 0;

    queue<Node*> q;
    q.push(root);
    int height = 0;

    while (!q.empty()) {
        int size = q.size();
        height++;
        for (int i = 0; i < size; i++) {
            Node* node = q.front();
            q.pop();
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }
    return height;
}
