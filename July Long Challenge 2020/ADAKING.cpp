#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int k;
	    cin >> k;
	    char arr[8][8];
	    arr[0][0] = 'O';
	    k--;
	    for(int i = 0; i < 8; i++){
	        for(int j = 0; j < 8; j++){
	            if(i == 0 && j == 0){
	                continue;
	            }
	            if(k){
	                arr[i][j] = '.';
	                k--;
	            }
	            else{
	                arr[i][j] = 'X';
	            }
	        }
	    }
	    for(int i = 0; i < 8; i++){
	        for(int j = 0; j < 8; j++){
	            cout << arr[i][j];
	        }
	        cout << endl;
	    }
	}
}