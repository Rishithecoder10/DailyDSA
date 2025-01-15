DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        DLLNode * curr=head;
        DLLNode* prev=NULL;
        while(curr!=NULL){
            DLLNode* temp=curr->next;
            curr->next=curr->prev;
            curr->prev=temp;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
