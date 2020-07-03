#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

#define fo(i,n) for (int i = 0; i < n; ++i)
#define tr(i,n) for(auto i=n.begin();i!=n.end();i++)
#define w(t) while(t--)
#define ll long long int
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define fst ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define all(x) (x).begin(), (x).end()



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    w(t)
    {
        int n;
        cin>>n;
        int arr[n][n]={0};
        int incr,decr=0;
        fo(i,n)
        {
            incr=(i)*n+1;
            decr=(i+1)*n;
            fo(j,n)
            {
                if(i%2==0)
                {
                    arr[i][j]=incr++;
                }
                else
                {
                    arr[i][j]=decr--;
                }
            }
        }

        fo(i,n)
        {
            incr=decr+n;
            decr=(i+1)*n;
            fo(j,n)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

    }
}