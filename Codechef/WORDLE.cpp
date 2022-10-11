//CodeChef Problem Code: WORDLE
#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,i; string s,g,m="";
	cin>>t;
	while(t--){
	    cin>>s>>g; m="";
		for(i=0;i<s.length();i++){
			if(s[i]==g[i]){
				m+="G";
			}
			else{
				m+="B";
			}
		}
		cout<<m<<el;
	}
	return 0;
}
