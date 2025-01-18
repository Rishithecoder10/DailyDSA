 string FirstNonRepeating(string &s) {
    vector<int> freq(26, 0);  // Track frequency of each character
    queue<char> q;  // Queue to maintain order of characters
    
    for(int i = 0; i < s.length(); i++) {
        // Add current character to queue if first occurrence
        if(freq[s[i] - 'a'] == 0) {
            q.push(s[i]);
        }
        
        // Update frequency
        freq[s[i] - 'a']++;
        
        // Remove characters from queue front if they're repeating
        while(!q.empty() && freq[q.front() - 'a'] > 1) {
            q.pop();
        }
        
        // Update current position with first non-repeating character
        s[i] = q.empty() ? '#' : q.front();
    }
    
    return s;
}
