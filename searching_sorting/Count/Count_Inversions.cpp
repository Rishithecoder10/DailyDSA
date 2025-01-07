int merge(int arr[], int left, int mid, int right) {
    int i = left;       // Starting index for left subarray
    int j = mid + 1;    // Starting index for right subarray
    int k = 0;          // Index for temporary array
    int invCount = 0;   // Count of inversions

    int temp[right - left + 1]; // Temporary array to store merged elements

    // Merge the two halves and count inversions
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            invCount += (mid - i + 1); // Count inversions
        }
    }

    // Copy remaining elements of left subarray, if any
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements of right subarray, if any
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copy the merged elements back into the original array
    for (i = left, k = 0; i <= right; i++, k++) {
        arr[i] = temp[k];
    }

    return invCount;
}

int mergeAndCount(int arr[], int left, int right) {
    int invCount = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Count inversions in left and right halves
        invCount += mergeAndCount(arr, left, mid);
        invCount += mergeAndCount(arr, mid + 1, right);

        // Count split inversions and merge the two halves
        invCount += merge(arr, left, mid, right);
    }
    return invCount;
}

int countInversions(int arr[], int n) {
    return mergeAndCount(arr, 0, n - 1);
}
