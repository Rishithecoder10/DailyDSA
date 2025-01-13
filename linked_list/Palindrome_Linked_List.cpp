 bool isPalindrome(Node *head) {
        // Your code here
        vector<int> arr;
        Node* curr=head;
        while(curr!=NULL){
            arr.push_back(curr->data);
            curr=curr->next;
        }
        int forward=0;
        int n=arr.size();
        int backward=n-1;
        
        while(forward<backward){
            if(arr[forward]!=arr[backward]){
                return false;
            }
            forward++;
            backward--;
        }
        return true;
        
    }
