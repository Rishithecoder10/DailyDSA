#include<bits/stdc++.h>
using namespace std;

int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int sum1=0,sum2=0,sum3=0;
        for(int i=0;i<N1;i++) sum1+=S1[i];
        for(int i=0;i<N2;i++) sum2+=S2[i];
        for(int i=0;i<N3;i++) sum3+=S3[i];
        
        int top1=0,top2=0,top3=0;
        int ans=0;
        while(true){
            if(top1==N1 or top2==N2 or top3==N3){
                ans=0;
                return ans;
            }
            if(sum1==sum2 and sum2==sum3){
                ans=sum1;
                return ans;
            }
            if(sum1>=sum2 and sum1>=sum3){
                sum1-=S1[top1++];
            }
            else if(sum2>=sum1 and sum2>=sum3){
                sum2-=S2[top2++];
            }
            else if(sum3>=sum1 and sum3>=sum2){
                sum3-=S3[top3++];
            }
        }
        return 0;
    }