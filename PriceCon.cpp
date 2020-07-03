//JUNE CHALLENGE
//CHEF AND PRICE CONTROL



#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,sum1 = 0, sum2 = 0,ans;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum1 += arr[i];
            if(arr[i] > k){
                arr[i] = k;
            }
        }
        for(int i = 0; i < n; i++)
            sum2 += arr[i];
            
        ans = sum1-sum2;
        cout << ans << endl;
    }

    return 0;
}