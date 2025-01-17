Node* cloneLinkedList(Node* head) {
    // Create a map to store node to index mapping
    unordered_map<Node*, int> un;
    Node* curr = head;
    int number = 1;
    int count = 0;
    
    // First pass: Map original nodes to indices
    while (curr != NULL) {
        un[curr] = number;  // Fixed map insertion syntax
        number++;
        count++;
        curr = curr->next;
    }
    
    // Create a map to store index to new node mapping
    unordered_map<int, Node*> newun;
    Node* prev = NULL;
    Node* newhead = NULL;
    curr = head;
    
    // Second pass: Create new nodes and map indices to new nodes
    for (int i = 1; i <= count; i++) {
        Node* newnode = new Node(curr->data);
        if (newhead == NULL) {
            newhead = newnode;
        }
        newun[i] = newnode;  // Fixed map insertion syntax
        if (prev != NULL) {
            prev->next = newnode;
        }
        prev = newnode;
        curr = curr->next;
    }
    
    // Third pass: Set random pointers
    curr = head;
    Node* newcurr = newhead;  // Fixed undefined variable
    for (int i = 0; i < count; i++) {
        if (curr->random == NULL) {
            newcurr->random = NULL;
            curr = curr->next;
            newcurr = newcurr->next;
            continue;
        }
        int node = un[curr->random];  // Fixed map access
        Node* pointer = newun[node];  // Fixed map access
        newcurr->random = pointer;
        newcurr = newcurr->next;
        curr = curr->next;
    }
    
    return newhead;
}
