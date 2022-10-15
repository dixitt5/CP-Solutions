// This is the solution to EID problem on CODECHEF
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a, a+n);
	    vector<int>b;
	    for(int i=0;i<n-1;i++){
	        int x;
	        x=abs(a[i]-a[i+1]);
	        b.push_back(x);
	    }
	    sort(b.begin(),b.end());
	    cout<<b[0]<<endl;
	}
	return 0;
}
