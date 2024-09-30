#include<bits/stdc++.h>
 using namespace std;

 class Solution{
    vector<int> candyStore(int candies[], int n, int k)
    {
        // Write Your Code here
        sort(candies,candies+n);
        int min=0,max=0;
        int i=0,j=n-1;
        while(i<=j)
        {
            min+=candies[i];
            i++;
            j-=k;
        }
        i=0,j=n-1;
        while(j>=i)
        {
            max+=candies[j];
            j--;
            i+=k;
        }
        return {min,max};
    }
 };