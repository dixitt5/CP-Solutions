// Problem Statement [MAXFUN](https://www.codechef.com/submit/MAXFUN)

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int T, N;
	cin>>T;
	for(int i = 0; i < T; i++){
	    cin>>N;
	    long long arr[N];
	    for(long long i = 0; i < N; i++)
	        cin>>arr[i];
	        
	    sort(arr, arr+N);
	    cout<<2*abs(arr[N-1]-arr[0])<<endl;
	    
	}
	return 0;
}