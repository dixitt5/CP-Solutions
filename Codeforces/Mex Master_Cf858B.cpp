/*
   Codeforces Round 858 (Div. 2)
   Problem B - Mex Master
   Problem link - https://codeforces.com/contest/1806/problem/B
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
    ll n;
    cin >> n;
    ll sum(0);
    ll f(1);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (!x)
            sum++;
        else if (x >= 2)
            f ^= f;
    }
    if (sum <= (n + 1) / 2)
        cout << "0\n";
    else if (!f || sum == n)
        cout << "1\n";
    else
        cout << "2\n";
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