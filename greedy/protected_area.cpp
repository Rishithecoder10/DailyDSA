#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int w,h,n;
		cin>>w>>h>>n;
		vector<int> a;
		vector<int> b;
		a.push_back(0);
		b.push_back(0);
		for(int i=0;i<n;i++){
			int x,y;
			cin>>x>>y;
			a.push_back(x);
			b.push_back(y);
		}
		a.push_back(w+1);
		b.push_back(h+1);
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
        int mx=0,my=0;
		for(int j=0;j<a.size()-1;j++){
			mx=max(mx,a[j+1]-a[j]-1);
			my=max(my,b[j+1]-b[j]-1);
		}
		cout<<mx*my<<endl;
	}
	return 0;
}