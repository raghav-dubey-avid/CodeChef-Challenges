#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
#define     int                     long long
 
const       int                     big = INT_MAX;
const       int                     sml = INT_MIN;
const       int                     mod = 1000000000 + 7; 
 
bool sat12(int a,int b,int p,int q)
{
    if(a==0 || b==0)
    {
        return (a-p==b-q);
    }
    int m1=1;
    int m2=2;
    if(p%a==0 && q%b==0)
    {
        m1=p/a;
        m2=q/b;
    }
    return (a-p==b-q  || m1==m2);
}
bool Sat0(int a,int b,int c,int p,int q,int r)
{
    return (a==p && b==q && c==r);
}
bool Sat1(int a,int b,int c,int p,int q,int r)
{
    if((a==p && b==q) || (b==q && c==r) || (a==p && c==r))return 1;
    if(a==p || b==q || c==r)
    {
        if(sat12(a,b,p,q) || sat12(b,c,q,r) || sat12(a,c,p,r))return 1;
    }
    if(a==0 || b==0 || c==0)
    {
        return((a-p==b-q && c-r==b-q));
    }
    int m1=1,m2=2,m3=3;
    if(p%a==0 && q%b==0 && r%c==0)
    {
        m1=(p/a);
        m2=(q/b);
        m3=(r/c);
    }
    return((a-p==b-q && c-r==b-q) || (m1==m2 && m2==m3));
}
bool sat22(int a,int b,int c,int p,int q,int r)
{
    int B,C;
    if(a)
    {
        if(p%a==0)
        {
            B=b*(p/a);
            if(sat12(B,c,q,r))return 1;
        }
    }
    B=b+(p-a);if(sat12(B,c,q,r))return 1;
    if(a)
    {
        if(p%a==0)
        {
            C=c*(p/a);
            if(sat12(b,C,q,r))return 1;
        }
    }
    C=c+(p-a);if(sat12(b,C,q,r))return 1;
    return 0;
}
 
bool sat_22(int a,int b,int c,int p,int q,int r)
{
    int B,C;
    if(a)
    {
        if(p%a==0)
        {
            B=b*(p/a);
            C=c*(p/a);
            if(sat12(B,C,q,r))return 1;
        }
    }
    B=b+(p-a);C=c+(p-a);
    if(sat12(B,C,q,r))return 1;
    return 0;
}
 
bool sat22_(int a,int b,int c,int p,int q,int r)
{
    int B,C;
    B=q-(p-a);
    C=r-(p-a);
    if(sat12(b,c,B,C))return 1;
    int div=1;
    if(a && p)
    {
        if(p%a==0)
        {
            div=ceil(1.0*p/a);
            if(q%div==0 && r%div==0)
            {
                B=q/div;
                C=r/div;
                if(sat12(b,c,B,C))return 1;
            }
        }
 
    }
    return 0;
}
 
bool eqn(int a,int p,int x,int y)
{
    return ((a+x)*y==p);
}
bool eqn_(int a,int p,int x,int y)
{
    return ((a*x)+y==p);
}
bool sat3(int a,int b,int c,int p,int q,int r)
{
    if((a==b && p==q) || (b==c && q==r) || (c==a && r==p))return 1;
    if((a==b && p!=q) || (b==c && q!=r) || (c==a && r!=p))return 0;
    if((a!=b && p==q) || (b!=c && q==r) || (c!=a && r==p))return 0;
    int x,y = ceil(1.0*(p-q)/(a-b));
    if(y)
    {
        x = (q-(b*y))/y;
        if(eqn(a,p,x,y) && eqn(b,q,x,y) && eqn(c,r,x,y))return 1;
    }
    x = (p-q)/(a-b);
    y= q-(b*x);
    if(eqn_(a,p,x,y) && eqn_(b,q,x,y) && eqn_(c,r,x,y))return 1;
    return 0;
}
 
bool Sat2(int a,int b,int c,int p,int q,int r)
{
    if(a==p || b==q || c==r)return 1;
    if(sat12(a,b,p,q) || sat12(b,c,q,r) || sat12(a,c,p,r))return 1;
    if(sat22(a,b,c,p,q,r) || sat22(b,a,c,q,p,r) || sat22(c,a,b,r,p,q))return 1;
    if(sat_22(a,b,c,p,q,r) || sat_22(b,a,c,q,p,r) || sat_22(c,a,b,r,p,q))return 1;
    if(p==q && q==r)return 1;
    if(sat22_(a,b,c,p,q,r) || sat22_(b,a,c,q,p,r) || sat22_(c,a,b,r,p,q))return 1;
    if(sat3(a,b,c,p,q,r))return 1;
    return 0;
}
 
 
int32_t main()
{
    int t = 1;
    cin >> t;
    
    for (int tc = 1; tc <= t; tc++)
    {
        int a,b,c;
        int p,q,r;
        cin>>a>>b>>c;
        cin>>p>>q>>r;
        if(Sat0(a,b,c,p,q,r))cout<<0<<endl;
        else if(Sat1(a,b,c,p,q,r)==1)cout<<1<<endl;
        else if(Sat2(a,b,c,p,q,r))cout<<2<<endl;
        else cout<<3<<endl;
    }
}