#include<bits/stdc++.h>
using namespace std;
 
void solve(){
	vector <string> v(8);
	for(int i=0 ; i<8 ; i++){
		cin>>v[i];
	}
	for(int i=0 ; i<8 ; i++){
		if(v[i][0]!='R') continue;
		char st=v[i][0];
		bool other=false;
		for(int j=1 ; j<8 ; j++){
			if(v[i][j]==st) continue;
			other=true;
			break;
		}
		if(!other){
			cout<<st<<"\n";
			return;
		}
	}
	for(int j=0 ; j<8 ; j++){
		if(v[0][j]!='B') continue;
		char st=v[0][j];
		bool other=false;
		for(int i=1 ; i<8 ; i++){
			if(v[i][j]==st) continue;
			other=true;
			break;
		}
		if(!other){
			cout<<st<<"\n";
			return;
		}
	}
}
 
int main(){
   int t;
   cin>>t;
   while(t--){
      solve();
   }
   return 0;
}