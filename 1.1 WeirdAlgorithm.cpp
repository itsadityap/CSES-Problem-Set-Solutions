/*
    Date:               04/05/2021
    Author:             Aditya Pandey
*/
#include <bits/stdc++.h>
using namespace std;
#define int              long long
#define endl             "\n"
 
signed main()
{   int n;
    cin>>n;
    cout<<n;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
            cout<<" "<<n;
        }
        else
        {
            n=(n*3)+1;
            cout<<" "<<n;
        }
    }
}