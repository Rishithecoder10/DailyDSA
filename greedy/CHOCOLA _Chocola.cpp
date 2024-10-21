//same as minimum cost to cut a bord into squares 
//here we cut chocolate insted of bord that's the difference

#include<bits/stdc++.h>
 using namespace std;

 class Solution{
    int minimumCostOfBreaking(vector<int> x, vector<int> y, int m, int n){
        //Write your code here
        sort(x.begin(),x.end(),greater<int>());
        sort(y.begin(),y.end(),greater<int>());
        int i=0,j=0;
        int h=1,v=1;
        int cost=0;
        m--,n--;
        while(i<m and j<n)
        {
            if(x[i]>y[j])
            {
                cost+=x[i]*h;
                i++;
                v++;
            }
            else{
                cost+=y[j]*v;
                j++;
                h++;
            }
        }
        while(i<m)
        {
            cost+=x[i]*h;
            i++;
            v++;
        }
        while(j<n){
            cost+=y[j]*v;
            j++;
            h++;
        }
        return cost;
    }
 };