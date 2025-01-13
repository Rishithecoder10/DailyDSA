 pair<Node *, Node *> splitList(struct Node *head) {
        // code here
       
       Node* head1=head ;

        Node* slow=head;
        Node* fast=head->next ;
        while(fast!=head && fast->next!=head){
            slow=slow->next;
            fast=fast->next->next ;
        }
        Node* head2 = slow->next ;
        Node* temp=slow->next ;
        slow->next=head1;
        while(temp->next!=head){
            temp=temp->next ;
        }
        temp->next = head2 ;
        return {head1, head2} ;
    }
