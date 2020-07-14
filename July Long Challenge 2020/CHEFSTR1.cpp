#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    ll ans = 0;
	    cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	        if(i){
	            ans += abs(arr[i]-arr[i-1])-1;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}