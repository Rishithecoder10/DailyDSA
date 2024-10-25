#include<bits/stdc++.h>
using namespace std;

int findknap(int w,vector<int> &wt,vector<int> &val,int n,vector<vector<int>> dp){
        if(w==0||n==0){
            return 0;
        }
        
        if(dp[n][w]!=-1){
            return dp[n][w];
        }
        
        if(wt[n-1]>w){
            return dp[n][w]=findknap(w,wt,val,n-1,dp);
        }
        else{
            return dp[n][w]=max(val[n-1]+findknap(w-wt[n-1],wt,val,n-1,dp),findknap(w,wt,val,n-1,dp));
        }
        
        return dp[n][w];
    }
    
    
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        // Your code here
        int n=wt.size();
        vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
        int ans=findknap(W,wt,val,n,dp);
        return ans;
    }