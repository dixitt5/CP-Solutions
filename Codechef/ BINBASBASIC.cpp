#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		string str;
		cin >> str;

		int change = 0;

		int l = 0, r = n - 1;
		while (l < r) {
			if (str[l] != str[r])
				change++;
			l++;
			r--;
		}


		if (k >= change) {
			if ((k - change) % 2 == 0)
				cout << "YES" << '\n';
			else if (n % 2 == 1)
				cout << "YES" << '\n';
			else
				cout << "NO" << '\n';
		}
		else
			cout << "NO" << '\n';
	}
	return 0;
}