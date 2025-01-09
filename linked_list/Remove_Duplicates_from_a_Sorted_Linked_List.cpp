 Node* removeDuplicates(Node* head) {

        // code here
        if(head==NULL||head->next==NULL){
            return head;
        }
        Node* curr=head;
        Node* next=head->next;
        while(curr!=NULL&& next!=NULL){
            if(curr->data==next->data){
                Node* jd=next->next;
                curr->next=jd;
                next=jd;
            }
            else{
                 curr=next;
                next=next->next;
            }
           
        }
        return head;
    }
