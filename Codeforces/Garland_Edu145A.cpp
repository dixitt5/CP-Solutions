/*
   Codeforces Round 145(Rated for div. 2)
   Problem A - Garland
   Problem link - https://codeforces.com/contest/1809/problem/A
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
    string s;
    cin >> s;
    vll cnt(10);
    for (auto c : s)
        ++cnt[c - '0'];
    int mx = *max_element(cnt.begin(), cnt.end());
    if (mx == 4)
        cout << -1;
    else if (mx == 3)
        cout << 6;
    else
        cout << 4;
    cout << '\n';
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