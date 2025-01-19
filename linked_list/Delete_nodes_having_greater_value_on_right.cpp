struct Node* reverseList(struct Node* head) {
        // code here
        // return head of reversed list
        if(head==NULL || head->next==NULL){
            return head;
        }
       struct Node*  var1=NULL;
        struct Node*  var2=head;
        struct Node*  var3=NULL;
        while(var2!=NULL){
            var3=var2->next;
            var2->next=var1;
            var1=var2;
            var2=var3;
        }
        return var1;
    }
    
    Node *compute(Node *head) {
        // your code goes here
        if(head==NULL||head->next==NULL){
            return head;
        }
        head=reverseList(head);
        int max=head->data;
        Node* curr=head->next;
        Node* prev=head;
        while(curr!=NULL){
            if(curr->data>=max){
                max=curr->data;
                prev=curr;
            }
            else{
                prev->next=curr->next;
            }
            
            curr=curr->next;
        }
        head=reverseList(head);
        return head;
    }
