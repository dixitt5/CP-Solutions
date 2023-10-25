class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<vector<char>>v(26);
        vector<int>marked(26,-1);
        int count=0;
        int j,k;
        for(int i=0;i<s1.size();i++){
            j=s1[i]-'a',k=s2[i]-'a';
            if(marked[j]==-1 && marked[k]==-1){
                v[count].push_back(s1[i]);
                v[count].push_back(s2[i]);
                marked[j]=count;
                marked[k]=count;
                count++;
            }
            else if(marked[j]!=-1 && marked[k]==-1){
                v[marked[j]].push_back(s2[i]);
                marked[k]=marked[j];
            }
            else if(marked[j]==-1 && marked[k]!=-1){
                v[marked[k]].push_back(s1[i]);
                marked[j]=marked[k];
            }
            else if(marked[j]!=marked[k]){
                int small = min(marked[j], marked[k]);
                int large = max(marked[j], marked[k]);
                for(auto i:v[large]){
                    marked[i-'a']=small;
                    v[small].push_back(i);
                }
                v[large].clear();
            }
        }
        for(int i=0;i<count;i++){
            sort(v[i].begin(),v[i].end());
        }
        for(int i=0;i<baseStr.size();i++){
            if(marked[baseStr[i]-'a']!=-1){
                baseStr[i]=v[marked[baseStr[i]-'a']][0];
            }
        }
        return baseStr;
    }
};
