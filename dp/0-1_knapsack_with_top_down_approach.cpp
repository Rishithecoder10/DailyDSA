#include<bits/stdc++.h>
using namespace std;


    int knapSack(int w, vector<int>& wt, vector<int>& val) {
        // Your code here
        int n=wt.size();
        int dp[n+1][w+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<w+1;j++){
                if(i==0||j==0){
                    dp[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<w+1;j++){
                if(wt[i-1]<=j){
                    dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][w];
    }
