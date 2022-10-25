#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define l long
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define mlog(a...) cout, a, '\n'
#define log(a) cout << (a) << endl
#define tcs   \
    ll t;     \
    cin >> t; \
    while (t--)
#define svtype(name, size, type) vector<type> name(size)
#define vtype(name, type) vector<type> name
#define fasterio                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ump(t1, t2, name) unordered_map<t1, t2> name
template <typename T>
ostream &operator,(ostream &out, const T &t)
{
    out << t;
    return out;
}
template <typename T>
ostream &operator<<(ostream &out, const vector<T> &v)
{
    for (auto &x : v)
        out << x << ' ';
    return out;
}

int main()
{
    fasterio
        tcs
    {
        int n;
        cin >> n;
        svtype(a, n, ll);
        svtype(b, n, ll);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        for (int i = 1; (n - (2 * i)) >= 0; i++)
        {
            if (a[n - (2 * i)] > a[n - (2 * i) + 1])
            {
                swap(a[n - (2 * i)], a[n - (2 * i) + 1]);
            }
        }
        // cout << a << endl;
        // cout << b << endl;
        if (b == a)
        {
            YES
        }
        else
        {
            NO
        }
    }
    return 0;
}