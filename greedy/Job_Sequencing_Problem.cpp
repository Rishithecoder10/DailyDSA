#include<bits/stdc++.h>
 using namespace std;

struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};

 class Solution{

    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,[](Job &a,Job&b){
            return a.profit>b.profit;
        });
        
        int maxdeadline=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(maxdeadline<arr[i].dead)
            {
                maxdeadline=arr[i].dead;
            }
        }
        
        vector<int> slot(maxdeadline+1,-1);
        int maxjob=0,maxprofit=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=arr[i].dead;j>0;j--)
            {
                if(slot[j]==-1)
                {
                    slot[j]=arr[i].id;
                    maxjob+=1;
                    maxprofit+=arr[i].profit;
                    break;
                }
            }
        }
        return {maxjob,maxprofit};
        
    } 
 };