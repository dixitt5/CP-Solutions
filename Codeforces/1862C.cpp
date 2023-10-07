#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll ty,ny,iy,cy=0,ky,jy,ly,fy;
    cin>>ty;
    while(ty--)
    {
        fy=0;
        cy=0;
        cin>>ny;
        ky=ny-1;
        vector<ll>v(ny);
        vector<ll>d(ny);
        for(iy=0;iy<ny;iy++)
            cin>>v[iy];
        for(iy=0;iy<ny;iy++)
            d[iy]=v[iy];
        vector<ll>r;
        r.push_back(ny);
        for(iy=1;iy<ny;iy++)
        {
            // v[iy]--;
            // for(ly=0;ly<ny;ly++)
            //     v[ly]--;
            for(jy=ky;jy>=0;jy--)
            {
                if(v[jy]-1*iy<=0)
                {
                    cy++;
                }
                else
                {
                    ky=jy;
                    break;
                }
            }
            r.push_back(ny-cy);
        }
        for(iy=0;iy<ny;iy++)
        {
            if(d[iy]==r[iy])
            {
                continue;
            }
            else
            {
                cout<<"NO\n";
                fy=1;
                break;
            }
        }
        if(fy==0)
            cout<<"YES\n";
        // if(r==v)
        //     cout<<"YES";
        // else
        //     cout<<"NO";
        // for(auto x:r)
        //     cout<<x<<" ";
        // cout<<endl;
    }
}
