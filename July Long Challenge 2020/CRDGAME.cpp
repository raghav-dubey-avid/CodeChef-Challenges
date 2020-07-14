#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    int chefWins = 0, smithWins = 0;
	    cin >> n;
	    int a[n], b[n];
	    for(int i = 0; i < n; i++){
	        cin >> a[i] >> b[i];
	        int chefSum = 0, smithSum = 0;
	        while(a[i]){
	            chefSum += a[i]%10;
	            a[i] /= 10;
	        }
	        while(b[i]){
	            smithSum += b[i]%10;
	            b[i] /= 10;
	        }
	        if(chefSum > smithSum){
	            chefWins++;
	        }
	        else if(chefSum < smithSum){
	            smithWins++;
	        }
	        else{
	            chefWins++;
	            smithWins++;
	        }
	    }
	    if(chefWins > smithWins){
	        cout << "0" << " ";
	    }
	    else if(chefWins < smithWins){
	        cout << "1" << " ";
	    }
	    else{
	        cout << "2" << " ";
	    }
	    
	    cout << max(chefWins, smithWins) << endl;
	}
	return 0;
}