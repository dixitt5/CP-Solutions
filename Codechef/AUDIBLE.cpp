#include <iostream>
using namespace std;

int main()
{
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x >= 67 && x <= 45000)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}