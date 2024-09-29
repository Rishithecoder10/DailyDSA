#include<bits/stdc++.h>
 using namespace std;

 class Solution{
    static bool comp(const vector<int> &a,const vector<int> &b)
{
    if(a[1]==b[1]){
        return a[3]<b[3];
    }
    return a[1]<b[1];
}
int maxStop(int n, int m, vector<vector<int>> &trains) {
    // Sort trains by departure time globally to minimize overlapping trains on the same platform
    for(int i=0;i<m;i++){
        trains[i].push_back(i);
    }
    sort(trains.begin(),trains.end(),comp);
    // Array to store the last departure time for each platform
    vector<int> lastDeparture(n + 1, 0);  // Initialize last departure time to 0 for all platforms

    int count = 0;  // To count how many trains can stop

    // Iterate over sorted trains and greedily assign platforms
    for (int i = 0; i < m; i++) {
        int arrival = trains[i][0];
        int departure = trains[i][1];
        int platform = trains[i][2];

        // Check if the train can be stopped at its platform
        if (arrival >=lastDeparture[platform]) {
            // Update the last departure time for the platform
            lastDeparture[platform] = departure;
            count++;  // This train can be stopped
        }
    }

    return count;  // Maximum number of trains that can stop at the station
}
 };