// Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {

        // Add code here
        unordered_map<int,int> un;
        Node* curr=head;
        while(curr!=NULL){
            un[curr->data]++;
            curr=curr->next;
        }
        curr=head;
        while(un[0]!=0){
            curr->data=0;
            curr=curr->next;
            un[0]--;
        }
        while(un[1]!=0){
            curr->data=1;
            curr=curr->next;
            un[1]--;
        }
        while(un[2]!=0){
            curr->data=2;
            curr=curr->next;
            un[2]--;
        }
        return head;
    }
