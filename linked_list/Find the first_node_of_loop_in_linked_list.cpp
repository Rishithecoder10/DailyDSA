Node* findFirstNode(Node* head) {
        // your code here
        if(head==NULL) return NULL;
        unordered_set<Node*> st;
        struct Node* curr=head;
        Node* empty = new Node(-1);  // Allocate memory
        while(st.find(curr)==st.end()){
            st.insert(curr);
            if(curr->next==NULL){
                return empty;
            }
            else{
                 curr=curr->next;
            }
           
        }
        return curr;
    }
