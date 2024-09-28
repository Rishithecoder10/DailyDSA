#include<bits/stdc++.h>
 using namespace std;

 class Solution{
     string chooseandswap(string a) {
        // Code Here
        int chararr[26];
        memset(chararr,-1,sizeof(chararr));
        int n=a.length();
        for(int i=0;i<n;i++){
            if(chararr[a[i]-'a']==-1){
                chararr[a[i]-'a']=i;
            }
        }
        int i,j;
        for( i=0;i<n;i++)
        {
            bool flag=false;
            for( j=0;j<a[i]-'a';j++){
                if(chararr[j]>chararr[a[i]-'a']){
                    flag=true;
                    break;
                }
            }
            if(flag) break;
        }
        if(i<n){
            char ch1=a[i];
            char ch2=char(j+'a');
            for(i=0;i<n;i++){
                if(a[i]==ch1)a[i]=ch2;
                else if(a[i]==ch2)a[i]=ch1;
            }
        }
        return a;
    }
 };