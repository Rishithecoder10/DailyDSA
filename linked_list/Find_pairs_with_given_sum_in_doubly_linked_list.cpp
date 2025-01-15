vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
         vector<pair<int, int>> un;
        if(head==NULL && head->next==NULL){
            return un;
        }
       
        Node* right=head;
        while(right->next!=NULL&&right->data<target  ){
            right=right->next;
        }
        
        Node* left=head;
        while(left->data<right->data){
            if(left->data+right->data==target){
                un.push_back({left->data,right->data});
                left=left->next;
                right=right->prev;
            }
            else if(left->data+right->data>target){
                right=right->prev;
            }
            else{
                left=left->next;
            }
        }
        return un;
    }
