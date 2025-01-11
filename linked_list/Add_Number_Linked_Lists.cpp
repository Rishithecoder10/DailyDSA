Node* reverseList(Node* head) {
    Node *prev = NULL, *curr = head, *next = NULL;
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;}
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        Node* frist=reverseList(num1);
        Node* second=reverseList(num2);
        int carry=0;
        Node* curr=NULL;
        Node* result=NULL;
        while(frist||second||carry){
            int sum=carry;
            if(frist){
                sum+=frist->data;
                frist=frist->next;
            }
            if(second){
                sum+=second->data;
                second=second->next;
            }
            Node* newnode=new Node(sum%10);
            carry=sum/10;
            if(!result){
                result=newnode;
                curr=result;
            }
            else{
                curr->next=newnode;
                curr=newnode;
            }
        }
        result=reverseList(result);
        
        while(result!=NULL && result->next!=NULL&&result->data==0){
            result=result->next;
        }
        return result;
    }
