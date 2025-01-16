Node *rotateDLL(Node *head, int p) {
    if(head == NULL || head->next == NULL) {
        return head;
    }
    
    // Count nodes
    Node* help = head;
    int count = 0;
    while(help != NULL) {
        help = help->next;
        count++;
    }
    
    // Calculate effective rotation
    if(p >= count && count != 0) {
        p = p % count;
    }
    
    // No rotation needed
    if(p == 0) {
        return head;
    }
    
    Node* temp = head;
    int p_curr = 0;
    Node* curr = head;
    
    // Move to the pth node
    while(curr != NULL && p_curr < p) {
        curr = curr->next;
        p_curr++;
    }
    
    // Safety check
    if(curr == NULL) {
        return head;
    }
    
    // Set up new head
    head = curr;
    curr = curr->prev;
    head->prev = NULL;
    curr->next = NULL;
    
    // Find the last node
    Node* newcurr = head;
    while(newcurr->next != NULL) {
        newcurr = newcurr->next;
    }
    
    // Connect the last node to the original first node
    newcurr->next = temp;
    temp->prev = newcurr;
    
    return head;
}
