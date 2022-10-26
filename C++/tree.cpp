#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll cnt(vector<ll> a,ll x);

int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll x,y;cin>>x>>y;
        ll temp1=x,temp2=y;
        vector<ll> v1,v2;
        v1.push_back(x);
        v2.push_back(y);
        while(x>1 || y>1)
        {
            if(x>1) {
            x=x%2==0?x/2:(x-1)/2;
            v1.push_back(x);
            }
            if(y>1) {
            y=y%2==0?y/2:(y-1)/2;
            v2.push_back(y);
            }
            else if(x==1 && y==1)
                break;

        }
        /*for(auto& it: v1)
        {
            cout<<it<< " ";
        }
        cout<<endl;
        for(auto& it: v2)
        {
            cout<<it<< " ";
        }
        cout<<endl;*/
       ll j=v1.size()-1;
        ll ans;
        if(temp1==1 || temp2==1)
        {
            ans=1;
        }
        else
        {
            for(ll i=v2.size()-1;i>=0;i--)
            {
                if(v1[j]!=v2[i])
                {
                    if(temp1==max(temp1,temp2))
                    {
                        ans=v1[j+1];
                    }
                    else
                        ans=v2[i+1];
                    break;
                }
                j-=1;
            }
        }
       // cout<<ans<<endl;
        if(temp1==temp2)
        {
            cout<<0<<endl;
        }
        else
        {
            ll p=cnt(v1,ans);
            ll q=cnt(v2,ans);
            cout<<p+q<<endl;
        }
    }

    return 0;
}
ll cnt(vector<ll> a,ll x)
{
    ll n=a.size(),c=0;
    for(ll i=0;i<n;i++)
    {

        if(a[i]==x)
           break;
        else
            c++;

    }
    return c;
}
