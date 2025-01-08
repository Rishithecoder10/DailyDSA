void removeLoop(Node* head) {
        // code here
        // just remove the loop without losing any nodes
        unordered_set<Node*> st;
        struct Node* curr=head;
        struct Node* prev=NULL;
        while(st.find(curr)==st.end()&&curr!=NULL){
            st.insert(curr);
            prev=curr;
            if(curr->next==NULL){
                return ;
            }
            else{
                 curr=curr->next;
            }
           
        }
        if(prev!=NULL){
            prev->next=NULL;
        }
        
        return;
    }
