/*
    Date:               05/05/2021
    Author:             Aditya Pandey
*/
#include <bits/stdc++.h>
using namespace std;
#define int              long long
#define endl             "\n"
 
signed main()
{   
    string s;
    cin>>s;
 
    int n=s.length();
    int count=0;
    int cur_count=1;
    for(int i=0;i<n;i++)
    {
        if(i<n-1 && s[i]==s[i+1])
        cur_count++;
 
        else
        {
            if(cur_count > count)
            {
                count=cur_count;
            }
            cur_count=1;
        }
    }cout<<count;
}