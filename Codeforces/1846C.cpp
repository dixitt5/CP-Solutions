#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll ty,ny,iy,ay,by,cy,dy,ky,ly,ey,jy;
    cin>>ty;
    while(ty--)
    {
        ly=0;
        cin>>ay>>by>>cy;
        vector<ll>p(ay,0);
        vector<ll>q(ay,0);
        for(iy=0;iy<ay;iy++)
        {
            dy=0;
            ey=0;
            ky=0;
            ly=0;
            vector<ll>v(by);
            for(jy=0;jy<by;jy++)
            {
                cin>>v[jy];
            }
            sort(v.begin(),v.end());
            for(jy=0;jy<by;jy++)
            {
                if(dy+v[jy]<=cy)
                {
                    dy+=v[jy];
                    ey+=dy;
                    ky++;
                }
                else
                {
                    break;
                }
            }
            p[iy]=ky;
            q[iy]=ey;
            // cout<<ky<<endl;
        }
        for(iy=1;iy<ay;iy++)
        {
            if(p[0]>p[iy])
            {
                ly++;
            }
            else if(p[0]==p[iy])
            {
                if(q[0]<=q[iy])
                {
                    ly++;
                }
            }
        }
        if(ay==1)
            cout<<"1\n";
        else
            cout<<ay-ly<<endl;
    }
}
