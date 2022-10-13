#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		double d = pow(0.143 * n, n);

		int r = floor(d);

		if ((d - r) < 0.5)
			cout << r << '\n';
		else
			cout << r + 1 << '\n';
	}

	return 0;
}