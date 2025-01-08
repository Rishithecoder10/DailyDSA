 bool detectLoop(Node* head) {
        // your code here
        if(head==NULL||head->next==NULL){
            return false;
        }
        struct Node* slow=head;
        struct Node* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
        
    }
