#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int i = 0;
    while (i < T)
    {
        long n;
        cin >> n;
        vector<vector<int>> data(n + 1);
        data[0] = vector<int>(33);
        long u = 1;
        while (u <= n)
        {
            long long a;
            cin >> a;

            int parsedA = a == 0 ? 32 : trunc(log2l(a));
            vector<int> prevdata = data[u - 1];
            prevdata[parsedA] += 1;
            data[u] = prevdata;
            u++;
        }
        u = 0;
        long q;
        cin >> q;
        while (u < q)
        {
            long l, r;
            cin >> l >> r;
            long long x;
            cin >> x;
            int parsedX = x == 0 ? 32 : trunc(log2l(x));
            int count = data[r][parsedX] - data[l - 1][parsedX];
            cout << (r - l + 1) - count << endl;
            u++;
        }
        i++;
    }
    return 0;
}