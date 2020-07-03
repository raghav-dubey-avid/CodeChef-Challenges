#include <bits/stdc++.h>

using namespace std;

int pairs(string s){
    if(s.length()<=1) return 0;
    int ans = 0;
    for(int i=0; i<=s.length()-2;){
        if(s[i]!=s[i+1]) {
                ans++;
                i+=2;
        }
        else i++;
    }
    if(s[s.length()-1]==s[s.length()])
        ans++;

    int a=0,b=0;
    for(int i=0; i<s.length();i++){
        if(s[i]=='x')
            a++;
        else
            b++;
    }
    if(ans!=0)
        ans=min(min(a,b),ans);

    return ans;
}

signed main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<pairs(s)<<endl;
    }
    return 0;
}