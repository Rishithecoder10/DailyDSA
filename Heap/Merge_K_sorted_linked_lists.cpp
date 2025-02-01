 Node* mergeKLists(vector<Node*>& arr) {
        // Your code here
        int n=arr.size();
       priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<n;i++){
            Node* curr=arr[i];
            while(curr!=NULL){
                pq.push(curr->data);
                curr=curr->next;
            }
        }
        Node* head=new Node(pq.top());
        pq.pop();
        Node * curr=head;
        while(!pq.empty()){
            Node* new_node=new Node(pq.top());
            curr->next=new_node;
            curr=new_node;
            pq.pop();
        }
        return head;
    }
