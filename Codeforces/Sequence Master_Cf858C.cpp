/*
   Codeforces Round 858 (Div. 2)
   Problem C - Sequence Master
   Problem link - https://codeforces.com/contest/1806/problem/C
*/

#include <bits/stdc++.h>
#define amz fourrr
#define ll long long
#define vll vector<ll>
using namespace std;
const ll M = 1e9 + 7;
const ll NUM = 1e18;

void fsolve()
{
    ll n, d = 0, s = 0, r = 0;
    cin >> n;

    vll p(n << 1);

    for (auto &i : p)
        cin >> i, d += abs(i);

    sort(p.begin(), p.end());

    if (n & 1)
    {
        cout << (n == 1 ? p[1] - p[0] : d) << endl;
        return;
    }
    if (n == 2)
        for (ll i : p)
            s += abs(i - 2);
    for (ll i = 0; i < (n << 1) - 1; i++)
        r += abs(p[i] + 1);
    cout << min({d, r + abs(n - p[(n << 1) - 1]), (n == 2 ? s : LLONG_MAX)}) << endl;
}

int main()
{
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        fsolve();
    }
    return 0;
}