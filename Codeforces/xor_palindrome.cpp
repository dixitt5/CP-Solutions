#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    int n = s.size();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]) return false;
    }
    return true;
}
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    // int cnto = count(s.begin(),s.end(),'1');
    // int cntz = count(s.begin(),s.end(),'0');
    int samecnt =0;
    int dsamecount =0;
    for(int i=0;i<n/2;i++){
        if(s[i]==s[n-i-1]) samecnt++;
        else{
            dsamecount++;
        }
    }
    samecnt+=samecnt;
// cout<<samecnt<<" "<<dsamecount<<endl;
    string ans ="";
    if(isPalindrome(s)){
        ans+='1';
    }
    else{
        ans+='0';
    }
    int total = (samecnt+dsamecount+(n%2));
for(int i=1;i<n;i++){
    if(i>=dsamecount && i<=total){
        int dif = (i-dsamecount);
    
        if(dif%2==0 || n%2==1)
        ans+='1';

        else{
            ans+='0';
        }
      
    }
    else{
        ans+='0';
    }
}

    if(isPalindrome(s)){
        ans+='1';
    }
    else{
        ans+='0';
    }
    cout<<ans<<endl;
    
}
int main(){


int t; cin>>t;
while (t--)
{
    solve();
    /* code */
}


    return 0;
}