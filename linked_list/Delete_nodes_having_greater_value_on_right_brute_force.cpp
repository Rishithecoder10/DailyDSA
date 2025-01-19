 Node *compute(Node *head) {
        // your code goes here
        Node* curr=head;
        Node* prev=NULL;
        while(curr!=NULL){
            Node* fcurr=curr->next;
            int flag=0;
            while(fcurr!=NULL){
                if(curr->data<=fcurr->data){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                if(prev==NULL){
                    head=curr->next;
                }
                else{
                    prev->next=curr->next;
                    curr=curr->next;
                }
            }
            else{
                prev=curr;
                
            }
            curr=curr->next;
        }
        return head;
    }
