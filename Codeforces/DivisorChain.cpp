link to the problem- https://codeforces.com/problemset/problem/1864/C

#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int main(){
	int T;cin>>T;
	while(T--){
        ll x;
        cin >> x;
        vector<int> arr;
        while (x != 1) {
            arr.push_back(x);
            ll p2 = 1;
            while (x % (2*p2) == 0) p2 *= 2;
            if (x == p2) p2 /= 2;
            x -= p2;
        }
        arr.push_back(1);
        cout << arr.size() << "\n";
        for (int y: arr) cout << y << " ";
        cout << "\n";
    }
}
