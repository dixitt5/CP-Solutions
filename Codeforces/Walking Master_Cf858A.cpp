/*
   Codeforces Round 858 (Div. 2)
   Problem A - Walking Master
   Problem link - https://codeforces.com/contest/1806/problem/A
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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b <= d && c <= a + d - b)
    {
        cout << (d - b) + (a + d - b - c) << "\n";
    }
    else
    {
        cout << "-1\n";
    }
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