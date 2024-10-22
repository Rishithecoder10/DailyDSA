#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,one=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) one++;
        }
        sort(a,a+n,greater<>());

        for(int i=0;i<one;i++) cout<<"1 ";

        if((n-one)==2 && (a[0]==3 && a[1]==2)) cout<<" 2 3 ";
        else{
            for(int i=0;i<n-one;i++){
                cout<<a[i]<<" ";
            }
        }
    }
    return 0;
}