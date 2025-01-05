int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        vector<int> ans;
        int n=a.size();
        int m=b.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(a[i]<b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }
        while(i<n){
            ans.push_back(a[i]);
            i++;
        }
        while(j<m){
            ans.push_back(b[j]);
            j++;
        }
        return ans[k-1];
    }
