#include<bits/stdc++.h>
 using namespace std;

 class Solution{
public:
    int pageFaults(int N, int C, int pages[]){
        // code here
        list<int> lrulist;
        int pagefault=0;
        
        for(int i=0;i<N;i++)
        {
            int page=pages[i];
            
            auto it=find(lrulist.begin(),lrulist.end(),page);
            
            if(it==lrulist.end())
            {
                pagefault++;
                
                if(lrulist.size()==C)
                {
                    lrulist.pop_back();
                }
            }
            else{
                lrulist.erase(it);
            }
            
            lrulist.push_front(page);
        }
        return pagefault;
    }
};