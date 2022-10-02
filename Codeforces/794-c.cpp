#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int arr1[n];
        if (n % 2 == 1)
        {
            for (int i = 0; i < n; i++)
            {
                arr1[(2 * i) % n] = a[i];
            }
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                arr1[(2 * i) % n] = a[i];
            }
            for (int i = n / 2; i < n; i++)
            {
                arr1[(2 * i + 1) % n] = a[i];
            }
        }
        bool flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (!((arr1[i] < arr1[(i - 1 + n) % n] && arr1[i] < arr1[(i + 1) % n]) || (arr1[i] > arr1[(i - 1 + n) % n] && arr1[i] > arr1[(i + 1) % n])))
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO\n";
            continue;
        }
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
                cout << arr1[i] << " ";
            cout << "\n";
        }
    }
    return 0;
}
