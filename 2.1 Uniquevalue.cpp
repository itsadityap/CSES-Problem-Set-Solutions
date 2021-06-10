/*
    Date:               08/05/2021
    Author:             Aditya Pandey
*/
#include <bits/stdc++.h>
using namespace std;
#define int            long long
#define endl             "\n"
#define MOD              1000000007
signed main()
{
	int n;
	cin>>n;
        vector<int> values(n);
        for(int i=0;i<n;i++)
        {
            cin>>values[i];
        }
        sort(values.begin(),values.end());
 
        int uniqueval=0;
 
        for(int i=0;i<n;i++)
        {
            if(i==0 || values[i] != values[i-1])
            uniqueval++;
        }
        cout<<uniqueval;       
}  