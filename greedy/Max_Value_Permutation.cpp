#include<bits/stdc++.h>
 using namespace std;

 class Solution{
     int Maximize(vector<int> &arr) {
        // Complete the function
        long long sum = 0;
        long long mod=1e9+7;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            sum = sum + ((arr[i]%mod)*i)%mod;
        }
        return sum%mod;
   }
 };