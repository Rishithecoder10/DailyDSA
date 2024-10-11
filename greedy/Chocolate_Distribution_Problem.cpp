#include<bits/stdc++.h>
 using namespace std;

 class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        
        if(n==0||m==0){
            return 0;
        }
        if(n<m){
            return -1;
        }
        long long min_dif=INT_MAX;
        for(int i=0;i+m-1<n;i++){
            long long diff=a[i+m-1]-a[i];
            min_dif=min(diff,min_dif);
        }
        return min_dif;
    }   
 };