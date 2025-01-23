void SortedStack :: sort()
{
    // If stack is empty or has only one element, return
    if(s.empty() || s.size() == 1) {
        return;
    }
    
    // Temporary stack for sorting
    stack<int> tempStack;
    
    while(!s.empty()) {
        // Remove the top element from original stack
        int temp = s.top();
        s.pop();
        
        // While tempStack is not empty and its top is less than current element
        while(!tempStack.empty() && tempStack.top() < temp) {
            // Move elements back to original stack
            s.push(tempStack.top());
            tempStack.pop();
        }
        
        // Insert current element in correct position
        tempStack.push(temp);
    }
    
    // Copy back to original stack to maintain descending order
    while(!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}
