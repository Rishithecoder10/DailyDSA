 vector<int> preorder(Node* root) {
        // write code here
        vector<int> ans;
        stack<Node*> st;
        st.push(root);
        while(!st.empty()){
            Node* curr=st.top();
            ans.push_back(curr->data);
            st.pop();
            if(curr->right){
                st.push(curr->right);
            }
            if(curr->left){
                st.push(curr->left);
            }
            
        }
        return ans;
    }
