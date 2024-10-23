#include<bits/stdc++.h>
using namespace std;

string rearrangeString(string str)
    {
        //code here
        vector<int> freq(26,0);
        for(int i=0;i<str.length();i++){
            freq[str[i] - 'a']++;
        }
        priority_queue<pair<int,char>> pq;
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                pq.push({freq[i],i+'a'});
            }
        }
        string result="";
        pair<int,char> prev={-1,'#'};
        while(!pq.empty()){
            auto current=pq.top();
            pq.pop();
            result+=current.second;
            if(prev.first>0){
                pq.push(prev);
            }
            current.first--;
            prev=current;
        }
        
        if(result.size()!=str.size()){
            return "-1";
        }
        
        return result;
    }