#include <bits/stdc++.h>
#define edl  cout<<endl;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X;
        cin >> X;
        int a[X];
        for (int i = 0; i < X; i++)
            cin >> a[i];

        int Y;
        cin >> Y;
        int b[Y];
        for (int i = 0; i < Y; i++)
            cin >> b[i];
        sort(b, b + Y);
        for (int i = 0; i < X; i++)
        {
            if (!binary_search(b, b + Y, a[i]))
                cout << a[i] << ' ';
        }
        edl
    }
    return 0;
}
