bool isHeap(struct Node* tree) {
        // code here
         queue<Node*> q;
        q.push(tree);
      
        
        while(!q.empty()){
            
            Node *node = q.front();
            q.pop();
            
            if(node -> left){
                
                if(node -> left -> data > node -> data){
                    return false;
                }
                
                q.push(node -> left);
            }
            
            if(node -> right){
                if(node -> right -> data > node -> data){
                    return false;
                }
                
                q.push(node -> left);
            }
                
                if(node -> right && !node -> left){
                    return false;
                }
                
        }
        
        return true;
        
        
    }
