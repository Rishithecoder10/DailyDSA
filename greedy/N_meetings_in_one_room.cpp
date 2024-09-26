#include<bits/stdc++.h>
 using namespace std;

 class Solution{

    public:
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        pair<int,int> meeting[n];
        for(int i=0;i<n;i++)
        {
            meeting[i]={end[i],start[i]};
        }
        
        sort(meeting,meeting+n);
        
        int lastendtime=meeting[0].first;
        int ans=1;
        
        for(int i=0;i<n;i++)
        {
            if(lastendtime<meeting[i].second)
            {
                ans++;
                lastendtime=meeting[i].first;
            }
        }
        return ans;
    }

 };
