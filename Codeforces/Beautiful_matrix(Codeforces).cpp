#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                cout<<abs(2-i)+abs(2-j)<<endl;
            }
        }
    }
}
