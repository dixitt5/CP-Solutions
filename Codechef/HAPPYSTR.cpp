#include <iostream>
using namespace std;

int main()
{
    int t, count = 0, max;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        max = 0;
        for (int i = 0; i < s.size(); i++)
        {
            count = 0;
            for (int j = i; j < s.size(); j++)
            {
                if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
                {
                    count++;
                }
                else
                {
                    i = j;
                    break;
                }
            }
            if (count > 2)
            {
                cout << "Happy" << endl;
                max = 1;
                break;
            }
        }
        if (max == 0)
        {
            cout << "Sad" << endl;
        }
    }
    return 0;
}