#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/gym/102961/problem/H
// Defining

#define ll long long
#define l long
#define svtype(name, size, type) vector<type> name(size)
#define fasterio                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    fasterio int n;
    cin >> n;
    svtype(a, n, ll); 
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; 
    }
    ll tmp = -1000000001;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (tmp < sum)
        {
            tmp = sum; 
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    ll ans = tmp;
    cout << ans << endl;
    return 0;
}