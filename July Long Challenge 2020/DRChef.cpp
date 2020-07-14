#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    long long int t=1;
    cin>>t;
    while(t--)
    {
        int n,x; cin>>n>>x;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        sort(arr, arr+n);
 
        int i=0, tot=0;
        while(i<n && 2*arr[i]<x)
        {
            i++;
            tot++;
        }
 
        while(i<n)
        {
            tot++;
            if(x<arr[i] && 2*(arr[i]-x) >= arr[i])
            {
                x = 2*x;    
 
                continue;
            }
            if(arr[i] <= x)
            {
                x = arr[i];
                i++;
            }
            x = 2*x;
 
        }
        cout<<tot<<endl;
 
    }
    return 0;
}