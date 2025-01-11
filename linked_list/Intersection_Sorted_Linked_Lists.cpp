Node* findIntersection(Node* head1, Node* head2) {
        // code goes here.
        Node* frist=head1;
        Node* second=head2;
        Node* result=NULL;
        Node* curr=NULL;
        while(frist!=NULL&&second!=NULL){
            if(frist->data==second->data){
                if(!result){
                    Node* newnode=new Node(frist->data);
                    result=newnode;
                    curr=newnode;
                }
                else{
                    Node* newnode=new Node(frist->data);
                    curr->next=newnode;
                    curr=newnode;
                }
                frist=frist->next;
                second=second->next;
            }
            else if(frist->data<second->data){
                frist=frist->next;
            }
            else{
                second=second->next;
            }
        }
        return result;
    }
