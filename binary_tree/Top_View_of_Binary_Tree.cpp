vector<int> topView(Node *root) {
        // code here
        vector<int> ans;
        if(root==NULL) return ans;
        map<int,int> mp;
        queue<pair<Node*,int>> pq;
        pq.push({root,0});
        while(!pq.empty()){
            Node* curr=pq.front().first;
            int hd=pq.front().second;
            pq.pop();
            if(mp.find(hd)==mp.end()){
                mp[hd]=curr->data;
            }
            if(curr->left){
                pq.push({curr->left,hd-1});
            }
            if(curr->right){
                pq.push({curr->right,hd+1});
            }
        }
        for(auto ht:mp){
            ans.push_back(ht.second);
        }
        return ans;
    }
