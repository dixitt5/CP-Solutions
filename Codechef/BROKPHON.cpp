// Problem Statement [BROKPHON](https://www.codechef.com/submit/BROKPHON)

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    int ans = 0;

    for (int i = 0; i < n; i++) {
      if (i > 0 && arr[i] != arr[i - 1]) {
        ans++;
        continue;
      }
      if (i < n - 1 && arr[i] != arr[i + 1]) {
        ans ++;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
