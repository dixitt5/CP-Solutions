// I have added solution for the problem : https://www.codechef.com/problems/DICENUM

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int a[3]; for(int i=0;i<3;i++)cin>>a[i];
	    int b[3]; for(int j=0;j<3;j++) cin>>b[j];
	    sort(a,a+3);
	    reverse(a,a+3);
	    sort(b,b+3);
	    reverse(b,b+3);
	    bool alice = false;
	    bool bob = false;
	    for(int i=0;i<3;i++){
	        if(a[i]>b[i]){
	            alice = true;
	            break;
	        }
	        else if(a[i]<b[i]){
	            bob = true;
	            break;
	        }
	    }
	    if(alice){
	        cout<<"Alice\n";
	    }
	    if(bob){
	        cout<<"Bob\n";
	    }
	    if(bob==false && alice==false){
	        cout<<"Tie\n";
	    }
	}
	return 0;
}
