Node *removeDuplicates(Node *head) {
        // your code goes here
        if(head==NULL||head->next==NULL){
            return head;
        }
        unordered_set<int> un;
        // un.insert(head->data);
        Node* curr=head;
        Node* next=head->next;
        un.insert(head->data);
        while(curr!=NULL&& next!=NULL){
            if(un.find(next->data)!=un.end()){
                Node* jd=next->next;
                curr->next=jd;
                next=jd;
            }
            else{
                un.insert(next->data);
                curr=next;
                next=next->next;
            }
           
        }
        return head;
    }
