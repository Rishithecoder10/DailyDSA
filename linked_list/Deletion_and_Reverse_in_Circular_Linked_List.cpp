Node* reverse(Node* head) {
        // code here
         if(head == NULL || head->next == head) {
        return head;
    }
    
    struct Node* var1 = NULL;     // previous node
    struct Node* var2 = head;     // current node
    struct Node* var3 = NULL;     // next node
    
    // Save the old head to update its next pointer later
    Node* oldHead = head;
    
    do {
        var3 = var2->next;        // save next
        var2->next = var1;        // reverse link
        var1 = var2;              // move var1 forward
        var2 = var3;              // move var2 forward
    } while(var2 != head);
    
    // Complete the circular link
    oldHead->next = var1;
    
    return var1;
    }

    // Function to delete a node from the circular linked list
   Node* deleteNode(Node* head, int key) {
    if (!head) {
        return NULL; // Empty list
    }

    Node* curr = head;
    Node* prev = NULL;

    // Case 1: Deleting the head node
    if (head->data == key) {
        Node* last = head;
        while (last->next != head) { // Find the last node
            last = last->next;
        }

        if (head == head->next) { // Single node case
            delete head;
            return NULL;
        }

        last->next = head->next; // Fix circular link
        Node* newHead = head->next;
        delete head;
        return newHead;
    }

    // Case 2: Deleting other nodes
    do {
        prev = curr;
        curr = curr->next;
        if (curr->data == key) {
            prev->next = curr->next; // Skip the current node
            delete curr;
            return head;
        }
    } while (curr != head);

    return head; // Key not found, return unchanged list
}
