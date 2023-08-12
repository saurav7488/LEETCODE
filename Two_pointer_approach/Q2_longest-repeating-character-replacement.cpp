#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        map<char,int>m;
        int i=0,j=0,maxi=0;
        int ans=0;
        while(j<n)  {
            m[s[j]]++;
            maxi=max(maxi,m[s[j]]);
            while((j-i+1)-maxi > k ) {
                 m[s[i]]--;
                 i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};