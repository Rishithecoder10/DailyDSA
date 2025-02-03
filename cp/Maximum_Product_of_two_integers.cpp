#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    if(n < 2) return 0;
    
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;
    
    
    for(int i = 0; i < n; i++) {
       
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2) {
            max2 = arr[i];
        }
        
        
        if(arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if(arr[i] < min2) {
            min2 = arr[i];
        }
    }
    
    
    long long prod1 = (long long)max1 * max2;
    long long prod2 = (long long)min1 * min2;
    
    
    if(prod1 >= prod2) {
        cout << min(max1, max2) << " " << max(max1, max2);
    } else {
        cout << min(min1, min2) << " " << max(min1, min2);
    }
    
    return 0;
}
