struct node *reverseKGroup(struct node *head, int k) {
        // Complete this method
        if(head==NULL) return NULL;
        struct node * count=head;
        int node=0;
        while(count!=NULL){
            node++;
            count=count->next;
        }
        
        struct node* prev=NULL;
        struct node* curr=head;
        struct node* next=NULL;
        
        int remainning= node<k?node:k;
        for(int i=0;i<remainning;i++){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        if(next!=NULL){
            head->next=reverseKGroup(next,k);
        }
        
        return prev;
    }
