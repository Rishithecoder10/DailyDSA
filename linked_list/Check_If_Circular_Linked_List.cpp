 bool isCircular(Node *head) {
    if(head == NULL || head->next == NULL) {
        return false;
    }
    
    // Start fast from head
    Node* curr = head->next;
    
    // Check if any node points back to head
    while(curr != NULL && curr != head) {
        curr = curr->next;
    }
    
    // If curr equals head, we found a circular link
    return (curr == head);
}
