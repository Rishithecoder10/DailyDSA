string find(Node* root,unordered_map<string,int>& mp,vector<Node*>& res){
        if(root==NULL){
            return "N";
        }
        string s=to_string(root->data)+','+find(root->left,mp,res)+','+find(root->right,mp,res);
        if(mp[s]==1){
            res.push_back(root);
        }
        mp[s]++;
        return s;
    }
    
    vector<Node*> printAllDups(Node* root) {
        // Code here
        unordered_map<string,int> mp;
        vector<Node*> res;
        find(root,mp,res);
        return res;
    }
