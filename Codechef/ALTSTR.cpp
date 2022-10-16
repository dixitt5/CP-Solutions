// Problem Statement [ALTSTR](https://www.codechef.com/submit/ALTSTR)

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, N;
	string S;
	cin>>T;
	for(int i = 0; i < T; i++){
	    cin>>N;
	    cin>>S;
	    int ones = 0, zeros = 0;
	    for(int i = 0; i < N; i++){
	        if(S[i] == '1')
	            ones++;
	        else
	            zeros++;
	    }
	    int p = max(ones, zeros);
	    int q = min(ones, zeros);
	    if(p == q)
	        cout<<2*q<<endl;
	    else    
	        cout<<2*q+1<<endl;
	        
	    ones = zeros = 0;
	}
	return 0;
}
