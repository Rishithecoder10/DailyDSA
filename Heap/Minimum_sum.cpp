string minSum(vector<int> &arr) {
    // Use min heap to get digits in sorted order
    priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
    
    string num1, num2;
    bool first1 = true, first2 = true;
    
    // Build two numbers by alternating digits
    while(!pq.empty()) {
        int digit = pq.top();
        pq.pop();
        
        // For first number
        if(first1) {
            if(digit != 0) {  // Skip leading zeros
                num1 += (digit + '0');
                first1 = false;
            }
        }
        else num1 += (digit + '0');
        
        // For second number if more digits exist
        if(!pq.empty()) {
            digit = pq.top();
            pq.pop();
            
            if(first2) {
                if(digit != 0) {  // Skip leading zeros
                    num2 += (digit + '0');
                    first2 = false;
                }
            }
            else num2 += (digit + '0');
        }
    }
    
    // Handle cases where one or both numbers might be empty or all zeros
    if(num1.empty()) num1 = "0";
    if(num2.empty()) num2 = "0";
    
    // Add the numbers digit by digit
    vector<int> sum;
    int carry = 0;
    int i = num1.length() - 1;
    int j = num2.length() - 1;
    
    while(i >= 0 || j >= 0 || carry) {
        int total = carry;
        if(i >= 0) total += (num1[i--] - '0');
        if(j >= 0) total += (num2[j--] - '0');
        sum.push_back(total % 10);
        carry = total / 10;
    }
    
    // Convert sum to string
    string result;
    for(int k = sum.size() - 1; k >= 0; k--) {
        result += (sum[k] + '0');
    }
    
    return result;
}
