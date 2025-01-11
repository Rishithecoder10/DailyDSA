Node* addOne(Node* head) {
    if (!head) {
        return new Node(1);
    }
    
    // Step 1: Reverse the linked list
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    // Now prev is the new head of reversed list
    Node* newHead = prev;
    current = prev;
    
    // Step 2: Add 1 and handle carry
    int carry = 1;
    Node* last = NULL;
    
    while (current != NULL && carry > 0) {
        int sum = current->data + carry;
        current->data = sum % 10;
        carry = sum / 10;
        last = current;
        current = current->next;
    }
    
    // If carry is still remaining, create new node
    if (carry > 0) {
        last->next = new Node(carry);
    }
    
    // Step 3: Reverse the list again
    prev = NULL;
    current = newHead;
    next = NULL;
    
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    return prev;
}
