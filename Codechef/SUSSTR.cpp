#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string t = "";

        int i = 0, j = n - 1;

        while (i <= j)
        {
            if (s[i] == '0')
                t = s[i] + t;
            else
                t = t + s[i];

            if (i < j)
            {
                if (s[j] == '0')
                    t = t + s[j];
                else
                    t = s[j] + t;
                j--;
            }

            i++;
        }

        cout << t << endl;
    }

    return 0;
}
