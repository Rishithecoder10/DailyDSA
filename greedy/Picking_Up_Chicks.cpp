#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,b,t;
    cin>>n>>k>>b>>t;
    int l[n],s[n];
    for(int i=0;i<n;i++){
        cin>>l[i]>>s[i];
    }
    int swap=0,im=0,count=0;
    for(int i=n-1;i>=0;i++){
        int distance_a=b-l[i];
        int distance_po=s[i]*t;
        if(distance_po>=distance_a){
            count++;
            if(im>0){
                swap+=im;
            }
        }
        else{
            im++;
        }
        if(count>=k) break;
    }
    return 0;
}