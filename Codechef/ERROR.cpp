//This is a solution to the CHEF AND FEEDBACK problem of CODECHEF
#include <bits/stdc++.h>
#include<cstring>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    bool b=false;
	    cin>>s;
	    for(int i=0;i<s.length();i++){
	        if((s[i]=='0'&& s[i+1]=='1'&& s[i+2]=='0')||(s[i]=='1'&& s[i+1]=='0'&& s[i+2]=='1')){
	            b=true;
	            break;
	        }
	    }
	    if(b==true){
	        cout<<"Good"<<endl;
	    }
	    else{
	        cout<<"Bad"<<endl;
	    }
	}
	return 0;
}
