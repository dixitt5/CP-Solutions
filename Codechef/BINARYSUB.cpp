#include <bits/stdc++.h>
using namespace std;
long long int solve(long long int x){
    long long int a[x+3];
	    a[0]=1;
	    a[1]=1;
    	a[2]=2;
	    for(int i=3;i<=x;i++){
	        a[i]=((a[i-1]% 998244353)+(a[i-2]%998244353))%998244353;
	    }
        return a[x];
}
int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    long long int ans=1;
	    int count=1;
	    for(int i=1;i<s.size();i++){
	        if(s[i]!=s[i-1]){
	            count++;
	        }
	        else if(count>1){
	            ans=((ans%998244353)*(solve(count)%998244353))%998244353;
	            count=1;
	        }
	    }
	    if(count>1){
	        ans=((ans%998244353)*(solve(count)%998244353))%998244353;
	            count=1;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
