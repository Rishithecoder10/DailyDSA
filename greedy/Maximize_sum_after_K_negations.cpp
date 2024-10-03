#include<bits/stdc++.h>
 using namespace std;

 class Solution{
     long long int maximizeSum(long long int arr[], int N, int K)
    {
         sort(arr, arr + N);
    
    // Flip negative numbers to maximize sum
    for (int i = 0; i < N && K > 0; i++) {
        if (arr[i] < 0) {
            arr[i] = -arr[i];  // Flip the negative element
            K--;  // Decrease K after each flip
        }
    }

    // If K is odd after processing all negatives, flip the smallest element
    if (K % 2 == 1) {
        // Find the smallest element in the array and flip it
        long long* min_elem_ptr = min_element(arr, arr + N);
        *min_elem_ptr = -*min_elem_ptr;  // Flip the smallest element
    }

    // Calculate the sum of the array
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }

    return sum;
}
 };