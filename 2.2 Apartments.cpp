/*
    Date:              31/10/2021
    Author:            Aditya Pandey
*/
#include<bits/stdc++.h>
using namespace std;
#define ll               long long
#define br               "\n"
#define MOD              1000000007
#define min3(a, b, c)       min(c, min(a, b))
#define min4(a, b, c, d)    min(d, min(c, min(a, b)))
signed main() 
{
	ll n,m,k;
    cin>>n>>m>>k;
    ll a[n+1],b[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
 
    ll i=0,j=0,ans=0;
 
    while(i<n && j<m)
    {
        if(abs(a[i]-b[j])<=k)
        {
            ++j;++i;
            ans++;
        }
        else
        {
            if(a[i]-b[j]>k)
            {
                ++j;
            }
            else
            {
                ++i;
            }
        }
    }
    cout<<ans<<br;
}
