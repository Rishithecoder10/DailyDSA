Node *moveToFront(Node *head) {
        // code here
        if(head==NULL||head->next==NULL){
            return NULL;
        }
        
        Node* prev=NULL;
        Node* curr=head;
        
        while(curr!=NULL&&curr->next!=NULL){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        curr->next=head;
        head=curr;
        return head;
    }
