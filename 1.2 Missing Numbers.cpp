/*
    Date:               04/05/2021
    Author:             Aditya Pandey
*/
#include <bits/stdc++.h>
using namespace std;
#define int              long long
#define endl             "\n"
 
signed main()
{   int n,a,sum=0;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    cout<<(n*(n+1)/2)-sum;
}