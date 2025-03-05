#include <iostream>
using namespace std;

// Function to heapify a subtree rooted at 'index'
void maxHeapify(int arr[], int size, int index) {
    int largest = index;
    int left = 2 * index + 1;  // Left child
    int right = 2 * index + 2; // Right child

    if (left < size && arr[left] > arr[largest])
        largest = left;

    if (right < size && arr[right] > arr[largest])
        largest = right;

    if (largest != index) {
        swap(arr[index], arr[largest]);
        maxHeapify(arr, size, largest);
    }
}

// Function to convert min heap to max heap
void convertMinHeapToMaxHeap(int arr[], int size) {
    for (int i = (size / 2) - 1; i >= 0; i--) {
        maxHeapify(arr, size, i);
    }
}

// Function to print the heap
void printHeap(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int minHeap[] = {10, 20, 15, 30, 40, 50, 100}; // Example Min Heap
    int size = sizeof(minHeap) / sizeof(minHeap[0]);

    cout << "Min Heap: ";
    printHeap(minHeap, size);

    convertMinHeapToMaxHeap(minHeap, size);

    cout << "Max Heap: ";
    printHeap(minHeap, size);

    return 0;
}
