#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        vector<int>ans;
        unordered_map<char,int>m;
        for(auto i:p)
            m[i]++;
        //using sliding window concept here
        int i=0,j=0;
        int count=m.size();
        int k=p.size();
        while(j!=s.size())
        {
           if(m.find(s[j])!=m.end())
           {
               m[s[j]]--;
               if(m[s[j]]==0)
                 count--;
           }
           if(j-i+1<k)
              j++;
           else if(j-i+1==k)
           {
               if(count==0)
                 ans.push_back(i);
               if(m.find(s[i])!=m.end())
               {
                   m[s[i]]++;
                   if(m[s[i]]==1)
                     count++;
               }
            i++;
            j++;
           }
            
        }
        return ans;

        
    }
};