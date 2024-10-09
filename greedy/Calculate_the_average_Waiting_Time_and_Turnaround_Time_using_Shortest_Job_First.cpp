#include<bits/stdc++.h>
 using namespace std;


class Solution{
    public:
     double round(double var){
        double value = (int)(var * 100 + .5);
        return (double)value / 100;
    }
    vector<double>averageTimes(vector<int>arrivalTime, vector<int>burstTime, int n){
        //Write your code here
       vector<int>completionTime(n);
        vector<int>turnAroundTime(n);
        vector<int>waitingTime(n);
        vector<int>completed(n);
    
        int systemTime = 0, totalProcesses = 0;
        double avgwaitingTime = 0, avgturnAroundTime = 0;
    
        // Initializing all process as undone
        for (int i = 0; i < n; i++) 
        {
            completed[i] = 0;
        }
    
        // Till all the processes are done
        while (totalProcesses != n) 
        {
            int check = n, min = INT_MAX;
    
            for (int i = 0; i < n; i++) 
            {
                /*
                    If the process arrival time is less than system time and it is not completed
                    and burstTime is smallest of this process this process will be executed first
                */
                if ((arrivalTime[i] <= systemTime) and (completed[i] == 0) and (burstTime[i] < min)) 
                {
                    min = burstTime[i];
                    check = i;
                }
            }
    
            // No process in the queue.
            if (check == n) 
            {
                systemTime++;
            }
            else 
            {
                completionTime[check] = systemTime + burstTime[check];
                systemTime += burstTime[check];
                turnAroundTime[check] = completionTime[check] - arrivalTime[check];
                waitingTime[check] = turnAroundTime[check] - burstTime[check];
                completed[check] = 1;
                totalProcesses++;
            }
        }
    
        // Sum for calculating averages
        for (int i = 0; i < n; i++) 
        {
            avgwaitingTime += waitingTime[i];
            avgturnAroundTime += turnAroundTime[i];
        }
    
        vector<double>ans(2);
    
        ans[0] = (double) (avgwaitingTime / n);
        ans[1] = (double) (avgturnAroundTime / n);
    
        double res1 = round(ans[0]);
        double res2 = round(ans[1]);
        return {res1, res2};
    }
};