#include<bits/stdc++.h>
 using namespace std;

 class Solution{
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        int n=arr.size();
        int m=dep.size();
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int i=0,j=0,maxcount=INT_MIN,count=0;
        while(i<n )
        {
            if(arr[i]<=dep[j])
            {
                count++;
                i++;
            }
            else{
                count--;
                j++;
            }
            maxcount=max(maxcount,count);
        }
        return maxcount;
    }
 };