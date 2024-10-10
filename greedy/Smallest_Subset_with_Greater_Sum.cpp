#include<bits/stdc++.h>
 using namespace std;

 class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
        
        long long total_sum=0;
        for(int i=0;i<N;i++)
        {
            total_sum+=Arr[i];
        }
        
        sort(Arr.begin(),Arr.end(),greater<int>());
        
        long long sum=0;
        int count=0;
        for(int i=0;i<N;i++){
            
            sum+=Arr[i];
            count++;
            if(sum>(total_sum-sum)){
                return count;
            }
        }
        return count;
    }
};