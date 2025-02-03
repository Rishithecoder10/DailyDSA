 priority_queue<int> maxHeap; // Max heap for smaller half
    priority_queue<int, vector<int>, greater<int>> minHeap; 
    public:
    //Function to insert heap.
    
    void insertHeap(int &x) {
        if (maxHeap.empty() || x <= maxHeap.top()) {
            maxHeap.push(x); // Insert into max heap
        } else {
            minHeap.push(x); // Insert into min heap
        }
        balanceHeaps(); // Balance the heaps
    }

    // Function to balance both heaps
    void balanceHeaps() {
        if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } else if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    // Function to return the median
    double getMedian() {
        if (maxHeap.size() > minHeap.size()) {
            return maxHeap.top(); // Odd case
        } else {
            return (maxHeap.top() + minHeap.top()) / 2.0; // Even case
        }
    }
