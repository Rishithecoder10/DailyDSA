int minValue(string s, int k) {
   vector<int> freq(26, 0);
   priority_queue<int> maxHeap;  // Only store frequencies
   
   // Count frequencies
   for(char c : s) {
       freq[c - 'a']++;
   }
   
   // Push non-zero frequencies
   for(int f : freq) {
       if(f > 0) maxHeap.push(f);
   }
   
   // Reduce highest frequencies k times
   while(k-- && !maxHeap.empty()) {
       int top = maxHeap.top();
       maxHeap.pop();
       if(--top > 0) maxHeap.push(top);
   }
   
   // Sum squares of remaining frequencies
   int result = 0;
   while(!maxHeap.empty()) {
       int f = maxHeap.top();
       result += f * f;
       maxHeap.pop();
   }
   
   return result;
}