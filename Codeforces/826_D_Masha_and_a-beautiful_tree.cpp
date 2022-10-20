#include<bits/stdc++.h>
using namespace std;
 
void solve(){
	int n;
	cin>>n;
	vector<vector<long long>> v(2,vector<long long> (n));
	int now=0;
	int other=1;
	for(int i=0 ; i<n ; i++){
		cin>>v[now][i];
	}
 
	int ops=0;
	int sz=v[now].size();
	while(sz>1){
		for(int i=0 ; i<v[now].size() ; i++){
			if(i%2==0){
				if(abs(v[now][i]-v[now][i+1])!=1){
					cout<<"-1\n";
					return;
				}
			}
		}
 
		for(int i=0 ; i<v[now].size() ; i++){
			if(i%2==0){
				if(v[now][i]<v[now][i+1]) continue;
				swap(v[now][i],v[now][i+1]);
				ops++;
			}
		}
 
		v[other].clear();
		for(int i=0 ; i<v[now].size() ; i++){
			if(i%2){
				v[other].pb(v[now][i]/2);
			}
		}
		now^=1;
		other^=1;
 
		sz=v[now].size();
	}
	cout<<ops<<"\n";
	
}
 
int main(){
   int t;
   cin>>t;
   while(t--){
      solve();
   }
   return 0;
}