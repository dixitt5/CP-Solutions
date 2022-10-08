#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t, n, a[100000];
    cin >> t;
    while (t--)
    {
        map<int, int> m;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        auto it = m.begin();
        int max = (*it).second;
        for (auto it1 : m)
        {
            if (it1.second > 1 && it1.second > max)
            {
                max = it1.second;
            }
        }
        cout << max - 1 << endl;
    }
    return 0;
}