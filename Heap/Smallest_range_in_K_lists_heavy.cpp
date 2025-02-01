typedef pair<int, pair<int, int>> Node; 
    pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k)
    {
          //code here
          priority_queue<Node, vector<Node>, greater<Node>> minHeap;
    int maxVal = INT_MIN, start = 0, end = INT_MAX;

    // Insert the first element of each list into the heap
    for (int i = 0; i < k; i++) {
        minHeap.push({KSortedArray[i][0], {i, 0}});
        maxVal = max(maxVal, KSortedArray[i][0]); // Track the max value
    }

    while (true) {
        Node minNode = minHeap.top();
        minHeap.pop();

        int minVal = minNode.first; // Current min value in heap
        int listIdx = minNode.second.first;
        int elemIdx = minNode.second.second;

        // Update the smallest range if the new range is smaller
        if (maxVal - minVal < end - start) {
            start = minVal;
            end = maxVal;
        }

        // If we reach the end of any list, stop processing
        if (elemIdx + 1 == n) break;

        // Insert the next element from the same list into the heap
        int nextVal = KSortedArray[listIdx][elemIdx + 1];
        minHeap.push({nextVal, {listIdx, elemIdx + 1}});
        maxVal = max(maxVal, nextVal); // Update max value
    }

    return {start, end};
    }
