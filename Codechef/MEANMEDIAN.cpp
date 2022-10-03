#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;
        int a, b, c;
        a = b = Y;
        c = 3 * X - 2 * Y;
        cout << min(a, c) << ' ' << b << ' ' << max(a, c) << endl;
    }
    return 0;
}