string reorganizeString(string s) {
    int n = s.length();
    vector<int> freq(26, 0);
    priority_queue<pair<int, char>> maxHeap;  // {frequency, char}
    string ans = "";
    
    // Count frequencies
    for(char c : s) {
        freq[c - 'a']++;
        if(freq[c - 'a'] > (n + 1) / 2) return "";
    }
    
    // Add to max heap
    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            maxHeap.push({freq[i], (char)(i + 'a')});
        }
    }
    
    // Build string by taking top two most frequent characters
    while(maxHeap.size() >= 2) {
        auto first = maxHeap.top(); maxHeap.pop();
        auto second = maxHeap.top(); maxHeap.pop();
        
        ans += first.second;
        ans += second.second;
        
        if(--first.first > 0) maxHeap.push(first);
        if(--second.first > 0) maxHeap.push(second);
    }
    
    // Handle last character if exists
    if(!maxHeap.empty()) {
        if(maxHeap.top().first > 1) return "";
        ans += maxHeap.top().second;
    }
    
    return ans;
}
