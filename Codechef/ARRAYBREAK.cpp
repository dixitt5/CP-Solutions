#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        long long evencnt = 0, oddcnt = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            if (x % 2 == 0)
            {
                evencnt++;
            }
            else
            {
                oddcnt++;
            }
        }
        if (oddcnt == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << evencnt << endl;
        }
    }
    return 0;
}