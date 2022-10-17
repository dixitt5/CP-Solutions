// Problem Statement [BALLOON](https://www.codechef.com/submit/BALLOON)

#include <bits/stdc++.h>

using namespace std;

int getresult(int arr[], int n) {
  if (n == 7) return n;

  int vib[8] = { 0 }, v, ans = -1;

  for (int i = 0; i < n; i++) {
    if (arr[i] >= 1 && arr[i] <= 7)
      vib[arr[i]] = 1;

    if (i <= 5) continue;

    for (v = 1; v <= 7; v++) {
      if (vib[v] == 0)
        break;
    }
    if (v == 8) {
      ans = i + 1;
      break;
    }
  }
  return ans;
}

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
      cin >> arr[i];

    cout << getresult(arr, n) << endl;
  }

  return 0;
}