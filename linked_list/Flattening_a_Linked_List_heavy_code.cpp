 Node* merge(Node* a,Node* b)
    {
        if(!a) return b;
        if(!b) return a;
        
        Node * result;
        if(a->data<=b->data){
            result=a;
            result->bottom=merge(a->bottom,b);
        }
        else{
            result=b;
            result->bottom=merge(b->bottom,a);
        }
        result->next=NULL;
        return result;
    }
    Node *flatten(Node *root) {
        // Your code here
        if(root==NULL||root->next==NULL){
            return root;
        }
        
        root->next=flatten(root->next);
        
        root=merge(root,root->next);
        
        return root;
    }
