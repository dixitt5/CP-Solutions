#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s,p;
        cin >> s;
        cin >> p;
        
        vector<int> datas(26,0),datap(26,0);
        int ns = s.length(), np = p.length();

        for(int i=0; i<ns; i++) datas[s[i]-'a']++;
        for(int i=0; i<np; i++) datap[p[i]-'a']++;

        vector<int> datascopy = datas;
        for(int i=0; i<26; i++){
            datascopy[i] -= datap[i]; 
        }
         
        int start = p[0]-'a';
        string ans;
        int i=0;
        for(i=0; i<26; i++){
            if(i==start){
                int flag = 0, j=0;
                /*for(int j=0; j<np; j++){
                    if(datap[j]>0){ 
                        flag = 1;
                        break;
                    }
                }*/
                while(j<np){
                    if(p[j]==p[0]){
                        j++; continue;
                    }
                    if(p[j]<p[0]){
                        flag = 1; break;
                    }
                    if(p[j]>p[0]){
                        flag = 0; break;
                    }
                }
                // p before p[0]'s in s.
                if(flag){
                    string temp = p;
                    ans.append(temp);
                    string temp2(datascopy[i],'a'+i);
                    ans.append(temp2);
                }
                // p after p[0]'s in s.
                else{
                    string temp(datascopy[i],'a'+i);
                    temp.append(p);
                    ans.append(temp);
                }
            }
            else{
                string temp(datascopy[i],'a'+i);
                ans.append(temp);
            }
        }

        cout << ans << endl;
    }
    return 0;
}