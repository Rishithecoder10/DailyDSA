long long multiplyTwoLists(Node *first, Node *second) {
    // code here
    Node* curr = second;
    string str = "";
    while(curr != NULL) {
        str += to_string(curr->data);  // Fixed: Using to_string instead of append
        curr = curr->next;
    }
    long long second_num = stoll(str);  // Fixed: Using stoll for long long and variable name
    
    Node* fcurr = first;
    string fstr = "";
    while(fcurr != NULL) {
        fstr += to_string(fcurr->data);  // Fixed: Using to_string instead of append
        fcurr = fcurr->next;
    }
    long long first_num = stoll(fstr);  // Fixed: Using stoll for long long
    
    const long long MOD = 1000000007;  // Added MOD as per requirement
    return (first_num * second_num) % MOD;  // Added MOD operation
}
