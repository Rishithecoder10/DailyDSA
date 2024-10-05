#include<bits/stdc++.h>
 using namespace std;

 class Solution{
     long long findMinSum(vector<int> &A,vector<int> &B,int N){
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        long long ans=0;
        for(int i=0;i<N;i++)
        {
            long long sum=A[i]-B[i];
            if(sum<0)
            {
                sum=(-sum);
            }
            ans+=sum;
        }
        return ans;
    }
 };