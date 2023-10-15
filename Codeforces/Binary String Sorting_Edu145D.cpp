/*
   Codeforces Round 145(Rated for div. 2)
   Problem D - Binary String Sorting
   Problem link - https://codeforces.com/contest/1809/problem/D
*/

#include <bits/stdc++.h>
#define amz fourrr
#define ll long long
#define vll vector<ll>
using namespace std;
const ll M = 1e9 + 7;
const ll NUM = 1e18;
const ll N = 1 << 19;
const ll C = 1e12 + 1;

void fsolve()
{
    ll a[N], n, t, mn, i, x;
    string s;

    cin >> s;
    n = s.size();
    mn = C * N;
    for (i = 1; i <= n; i++)
        a[i] = a[i - 1] + s[i - 1] - '0';
    for (i = 0; i <= n; i++)
        mn = min(mn, (a[i] + n - i - a[n] + a[i]) * C - ((s[i - 1] == '1' && s[i] == '0') | (s[i + 1] == '0' && s[i] == '1')));
    cout << mn << endl;
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