//CodeChef Problem Code: MATCHES
#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long t,a,b,s,r,m;
	cin>>t;
	while(t--){
	    cin>>a>>b; m=0;
		s=a+b;
		while(s>0){
			r=s%10;
			if(r==0 || r==6 || r==9){
				m+=6;
			}
			if(r==2 || r==3 || r==5){
				m+=5;
			}
			if(r==1){
				m+=2;
			}
			if(r==4){
				m+=4;
			}
			if(r==7){
				m+=3;
			}
			if(r==8){
				m+=7;
			}
			s=s/10;
		}
		cout<<m<<el;
	}
	return 0;
}
