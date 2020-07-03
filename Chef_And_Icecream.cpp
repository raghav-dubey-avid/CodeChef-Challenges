
//Use if then else
//make variables five, ten and fifteen
//if he give u 5 ten accept it and increase five
//if he give you 10 check if you have 5 or not if not then not possible and break
//if he give you 15 first check for 10 if you have then decrease 10 and continue
//if you dont have 10 check for 2 fives if you have decrease 2 fives and continue
//else not possible

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t,n,k;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int A[n] ={0};
        int f1,t,ft;
        f1=0;t=0;ft=0;
        int flag=0;
        for(int i=0;i<n;i++) 
        {
            cin >> A[i];
            if(A[i] == 5)
            {
                f1++;
            }
            else if(A[i] == 10)
            {
                if(f1>=1)
                {
                    f1--;
                    t++;
                }
                else flag=1;
            }
            else if(A[i] == 15)
            {
                if(t>=1)
                {
                    t--;
                    ft++;
                }
                else if(f1>=2)
                {
                    f1-=2;
                    ft++;
                }
                else flag=1;
            }
        }
        if(flag==1)
        {
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
    return 0;
}