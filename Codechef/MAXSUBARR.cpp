#include <bits/stdc++.h>
#define int long long
using namespace std;

int A[100001], B[100001], n, m;

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> A[i];
    cin >> m;
    for (int i = 1; i <= m; ++i)
        cin >> B[i];
    int sa = 0;
    for (int i = 1, s = 0; i <= n; ++i)
    {
        s += A[i];
        sa = max(sa, s);
    }
    for (int i = n, s = 0; i >= 0; --i)
    {
        s += A[i];
        sa = max(sa, s);
    }
    for (int i = 1; i <= m; ++i)
        if (B[i] >= 0)
            sa += B[i];
    cout << sa << endl;
}
signed main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
}
