#include<bits/stdc++.h>
 using namespace std;

 class Solution{
    public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        // Your code here
        priority_queue<int,vector<int>,greater<int>> minHeap(arr.begin(),arr.end());
        long long total_cost=0;
        while(minHeap.size()>1){
            long long frist=minHeap.top();
            minHeap.pop();
            long long  second=minHeap.top();
            minHeap.pop();
            long long cost=frist+second;
            total_cost+=cost;
            minHeap.push(cost);
            
        }
        return total_cost;
    }
 };