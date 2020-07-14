#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    long long v1,v2;
	    unordered_set<ll> x,y;
	    cin >> n;
	    for(int i = 0; i < 4*n-1; i++){
	        cin >> v1 >> v2;
	        if(x.count(v1)){
	            x.erase(v1);
	        }
	        else{
	            x.insert(v1);
	        }
	        if(y.count(v2)){
	            y.erase(v2);
	        }
	        else{
	            y.insert(v2);
	        }
	    }
	    cout << *x.begin() << " " << *y.begin() << endl;
	}
	return 0;
}