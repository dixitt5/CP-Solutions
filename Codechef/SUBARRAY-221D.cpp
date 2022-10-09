#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void karma()
{
    ll n, small = 0, index = 0, big = 0, bigindex = 0;
    // small for negative ,big for positive number
    cin >> n;
    int pos = 0, neg = 0, mix = 0;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if (i >= 0 && v[i] < 0)
        {
            small = v[i];
        }
        else if (i > 0 && v[i] < 0 && small < v[i])
        {
            small = v[i];
            // index = i;
        }
        else if (i >= 0 && v[i] >= 0)
        {
            big = v[i];
        }
        else if (i > 0 && v[i] >= 0 && big > v[i])
        {
            big = v[i];
            // bigindex = i;
        }
    }
    cout << "Biggest negative " << small << " smallest positive  " << big << endl;

    
}
void karma2()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    ll maxi = *max_element(v.begin(), v.end());
    ll mini = *min_element(v.begin(), v.end());
    ll a = maxi * maxi;
    ll b = mini * mini;
    ll c = maxi * mini;
    cout << (min(min(b, c), a)) << " " << (max(a, b)) << endl;
}

int main()
{
    ios::sync_with_stdio(0); // Input and output clearance
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        karma2();
    }
    return 0;
}
