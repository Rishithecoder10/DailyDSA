#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    
   
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    
    vector<int> result(n, -1);
    stack<int> st;  
    
   
    for(int i = n-1; i >= 0; i--) {
        
        while(!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }
        
        
        if(!st.empty()) {
            result[i] = arr[st.top()];
        }
        
       
        st.push(i);
    }
    
    
    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}
