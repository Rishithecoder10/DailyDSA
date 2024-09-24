#include<bits/stdc++.h>
 using namespace std;

 class Solution{
int transform (string a, string b)
    {
        //code here.
        int n=a.length();
        int m=b.length();
        if(n!=m) return -1;
         string sorted_a = a, sorted_b = b;
    sort(sorted_a.begin(), sorted_a.end());
    sort(sorted_b.begin(), sorted_b.end());
    
    if (sorted_a != sorted_b) return -1;
        int i=n-1,j=m-1,c=0;
        while(i>=0&&j>=0)
        {
            if(a[i]==b[j])
            {
                i--;
                j--;
            }
            else
            {
                c++;
                i--;
            }
        }
        return c;
    }
 };