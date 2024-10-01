#include<bits/stdc++.h>
 using namespace std;

 class Solution{
     int getminindex(const vector<int> &balance){
        int minind=0;
        for(int i=1;i<balance.size();i++)
        {
            if(balance[i]<balance[minind])
            {
                minind=i;
            }
        }
        return minind;
    }
    
     int getmaxindex(const vector<int> &balance){
        int maxind=0;
        for(int i=1;i<balance.size();i++)
        {
            if(balance[i]>balance[maxind])
            {
                maxind=i;
            }
        }
        return maxind;
    }
    
    void mincashflowrec(vector<vector<int>> &new_transaction, vector<int> &balance)
    {
        int maxcreditor=getmaxindex(balance);
        int maxdebtor=getminindex(balance);
        
        if(balance[maxcreditor]==0&&balance[maxdebtor]==0)
        {
            return;
        }
        
        int minamount=min(balance[maxcreditor],-balance[maxdebtor]);
        
        balance[maxcreditor]-=minamount;
        balance[maxdebtor]+=minamount;
        
        new_transaction[maxdebtor][maxcreditor]=minamount;
        
        mincashflowrec(new_transaction,balance);
    }
    
    vector<vector<int>> minCashFlow(vector<vector<int>> &transaction, int n) {
        // code here
        vector<int> balance(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                balance[i]+=(transaction[j][i]-transaction[i][j]);
            }
        }
        vector<vector<int>> new_transaction(n,vector<int>(n,0));
        mincashflowrec(new_transaction,balance);
        return new_transaction;
    }
 };