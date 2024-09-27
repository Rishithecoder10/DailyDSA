#include<bits/stdc++.h>
 using namespace std;

 struct Item{
    int value;
    int weight;
};

 class Solution{
     static bool cmp(struct Item a,struct Item b){
            double r1=(double)a.value/(double)a.weight;
            double r2=(double)b.value/(double)b.weight;
            return r1>r2;
        }
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n) {
        // Your code here
        
       sort(arr,arr+n,cmp);
       
       double total=0.0;
       
       for(int i=0;i<n;i++)
       {
           if(w==0) break;
           
           if(arr[i].weight<=w)
           {
               w-=arr[i].weight;
               total+=arr[i].value;
           }
           else{
               total+=arr[i].value*((double)w/(double)arr[i].weight);
               w=0;
           }
       }
        return total;
        
    }
 };