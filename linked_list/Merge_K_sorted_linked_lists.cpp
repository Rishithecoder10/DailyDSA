Node* merge(Node* a, Node* b) {
    if(!a) return b;
    if(!b) return a;
    
    Node* result;
    if(a->data <= b->data) {
        result = a;
        result->next = merge(a->next, b);
    } else {
        result = b;
        result->next = merge(a, b->next);
    }
    return result;
}

Node* mergeKLists(vector<Node*>& arr) {
    int k = arr.size();
    if(k == 0) return NULL;
    if(k == 1) return arr[0];
    
    int interval = 1;
    while(interval < k) {
        for(int i = 0; i + interval < k; i += interval*2) {
            arr[i] = merge(arr[i], arr[i + interval]);
        }
        interval *= 2;
    }
    return arr[0];
}
