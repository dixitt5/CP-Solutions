#include <iostream>
#define edl cout << endl;
#define ll long long
using namespace std;

int main()
{
    ll n, x;
    ll count = 0;
    cin >> x;
    for (int a = 0; a < x; a++)
    {
        cin >> n;
        if (n % 2)
            count = ((n - 1) / 2) * (n + 1);
        else
            count = 2 * n / 2 * n / 2;
        cout << count;
        edl
    }
    return 0;
}