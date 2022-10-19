#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n==0){
	 cout<<"1";
	}
	else if(n/10<1){
	 cout<<"1";
	}
	else if(n/10<10){
	 cout<<"2";
	}
	else if(n/10<100){
	 cout<<"3";
	}
	else{
	 cout<<"More than 3 digits";
	}
	
	return 0;
}
