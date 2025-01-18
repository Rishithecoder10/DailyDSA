 Node* divide(Node* head) {
        // code here
        vector<int> baki;
        vector<int> aki;
        Node* curr=head;
        while(curr!=NULL){
            if(curr->data%2==0){
                baki.push_back(curr->data);
            }
            else{
                aki.push_back(curr->data);
            }
            curr=curr->next;
        }
        baki.insert(baki.end(),aki.begin(),aki.end());
        curr=head;
        int i=0;
        while(curr!=NULL){
          curr->data=baki[i];
          i++;
          curr=curr->next;
        }
        return head;
    }
