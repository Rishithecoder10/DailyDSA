#include<bits/stdc++.h>
 using namespace std;

 class Solution{
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int,int>> pd;
        for(int i=0;i<n;i++)
        {
            pd.push_back({price[i],i+1});
        }
        sort(pd.begin(),pd.end());
        int ans=0;
        for(auto& stock:pd)
        {
            int price=stock.first;
            int maxstock=stock.second;
            int tstock=min(maxstock,k/price);
            k-=tstock*price;
            ans+=tstock;
            if(k<=0) break;
        }
        return ans;
    }
 };