#include<bits/stdc++.h>
 using namespace std;

 class Solution{
    long long maxSum(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int i=0,j=n-1;
        bool flag=1;
        long long ans=0;
        while(i<j)
        {
           ans+=abs(arr[i]-arr[j]);
           if(!flag){
               j--;
           }
           else{
               i++;
           }
           flag=(!flag);
        }
        ans+=abs(arr[i]-arr[0]);
        return ans;
    }
 };