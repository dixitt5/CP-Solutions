#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    string s;
    cin >> s;
    ll count=0;
    for (ll i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
            if (count >= 6)
            {
                cout << "YES" << endl;
                break;
            }
            
        }
        else
        {
            count=0;
        }
        
    }
 
    if (count<6)
    {
        cout<<"NO"<<endl;
    }
    
 
    return 0;
}
