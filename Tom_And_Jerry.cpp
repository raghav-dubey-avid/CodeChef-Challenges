#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        lli ts;
        cin>>ts;
        lli js=ts;
        int cnt=0;
        if(js==1 && ts==1)
        cout<<0<<"\n";
        else if(ts%2==1) {
            cout<<ts/2<<endl;
        }
        else{
            while(ts%2==0){
                ts/=2;
            }
            cout<<ts/2<<endl;
        }
        } 
	return 0;
}