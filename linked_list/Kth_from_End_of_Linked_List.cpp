int getKthFromLast(Node *head, int k) {
        // Your code here
        
       struct Node*  var1=NULL;
        struct Node*  var2=head;
        struct Node*  var3=NULL;
        while(var2!=NULL){
            var3=var2->next;
            var2->next=var1;
            var1=var2;
            var2=var3;
        }
        head=var1;
        Node* curr=head;
        int count=1;
        while(curr!=NULL){
            if(count==k){
                return curr->data;
            }
            count++;
            curr=curr->next;
        }
        
        return -1;
    }
