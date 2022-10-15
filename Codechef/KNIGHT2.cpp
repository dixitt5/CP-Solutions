// This is a solution to JOURNEY OF THE KNIGHT problem on CODECHEF
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a, b, c, d;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
	    if((abs(a-c)%2==0 && abs(b-d)%2==0)||(abs(a-c)%2!=0 && abs(b-d)%2!=0)){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
