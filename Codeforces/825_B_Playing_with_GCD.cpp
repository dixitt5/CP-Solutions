#include<bits/stdc++.h>
using namespace std;
 
void solve(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> v(n+1);
	for(int i=0 ; i<n ; i++){
		cin>>a[i];
	}
	v[0]=a[0];
	for(int i=1 ; i<n ; i++){
		int hcf=__gcd(a[i],a[i-1]);
		v[i]=(a[i]*a[i-1])/hcf;
	}
	v[n]=a[n-1];
	for(int i=0 ; i<n ; i++){
		int hcf=__gcd(v[i],v[i+1]);
		if(hcf!=a[i]){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
}
 
int main(){
   int t;
   cin>>t;
   while(t--){
      solve();
   }
   return 0;
}