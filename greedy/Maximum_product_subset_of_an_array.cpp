#include<bits/stdc++.h>
 using namespace std;
#define MOD 1000000007
 class Solution{
    long long int findMaxProduct(vector<int>& arr) {
    int n = arr.size();
    
    // If there's only one element, return it
    if (n == 1) {
        return arr[0];
    }

    long long product = 1;
    int negative_count = 0, zero_count = 0;
    int max_negative = INT_MIN;
    bool has_non_zero = false;

    // Traverse the array to count negatives, handle zeroes, and compute product
    for (int i = 0; i < n; i++) {
        // Skip zeroes but count them
        if (arr[i] == 0) {
            zero_count++;
            continue;
        }

        // Count negatives and find the largest negative (closest to zero)
        if (arr[i] < 0) {
            negative_count++;
            max_negative = max(max_negative, arr[i]);
        }

        // Multiply non-zero elements
        product = (product * arr[i]) % MOD;
        has_non_zero = true;
    }

    // If all elements are zero, return 0
    if (!has_non_zero) {
        return 0;
    }

    // If there is exactly one negative number and all other elements are zero, return 0
    if (negative_count == 1 && zero_count + negative_count == n) {
        return 0;
    }

    // If there's an odd number of negatives, divide the product by the largest negative
    if (negative_count % 2 != 0) {
        product /= max_negative;
    }

    // Handle negative products by adjusting the result
    if (product < 0) {
        product = (product + MOD) % MOD;
    }

    return product;
}
 };