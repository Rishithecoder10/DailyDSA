 Node* intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
        Node* empty=new Node(0);
        unordered_set<Node*> un;
        un.insert(head1);
        while(head1!=NULL){
            un.insert(head1->next);
            head1=head1->next;
        }
        Node* curr=head2;
        while(curr!=NULL){
            if(un.find(curr)!=un.end()){
                return curr;
            }
            else{
                curr=curr->next;
            }
        }
        return empty;
    }
