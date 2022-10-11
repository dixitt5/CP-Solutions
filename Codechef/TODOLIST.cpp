//CodeChef Problem Code: TODOLIST
#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,dl,r;
	cin>>t;
	while(t--){
	    cin>>n; r=0;
	    while(n--){
	        cin>>dl;
	        if(dl>999){
	            r++;
	        }
	    }
	    cout<<r<<el;
	}
	return 0;
}
