//CodeChef Problem Code: PAIREQ
#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,i,c,m;
	cin>>t;
	while(t--){
	    cin>>n; i=m=0; c=1;
		int *arr = new int[n];
		while(i<n){
			cin>>arr[i++];
		}
		sort(arr,arr+n);
		for(i=0;i<n-1;i++){
			if(arr[i]==arr[i+1]){
				c++;
			}
			else{
				c=1;
			}
			if(c>m){
				m=c;
			}
		}
		cout<<n-m<<el;
	}
	return 0;
}
