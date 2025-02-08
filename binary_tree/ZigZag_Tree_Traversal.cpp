vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> ans;
    	if(root==NULL)return ans;
    	queue<Node*> pq;
    	pq.push(root);
    	
    	int height=1;
    	while(!pq.empty()){
    	    int n=pq.size();
    	    vector<int> temp;
    	    for(int i=0;i<n;i++){
    	        Node* curr=pq.front();
    	        pq.pop();
    	        temp.push_back(curr->data);
    	        if(curr->left) pq.push(curr->left);
    	        if(curr->right) pq.push(curr->right);
    	    }
    	    if(height%2==0){
    	        int n1=temp.size();
    	        for(int i=n1-1;i>=0;i--){
    	            ans.push_back(temp[i]);
    	        }
    	    }
    	    else{
    	        int n2=temp.size();
    	        for(int j=0;j<n2;j++){
    	            ans.push_back(temp[j]);
    	        }
    	    }
    	    height++;
    	}
    	return ans;
    }
