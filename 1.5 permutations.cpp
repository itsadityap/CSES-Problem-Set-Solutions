/*
    Date:               16/05/2021
    Author:             Aditya Pandey
*/
#include <bits/stdc++.h>
using namespace std;
#define int              long long
#define endl             "\n"
#define MOD              1000000007
#define loop(i,n)        for(int i=0;i<n;i++)       
signed main()
{
	
     int num;cin>>num;
      vector<int> v;
      int i=1,j=2;
 
      if(num<=3 && num!=1)
      {
         cout<<"NO SOLUTION";
      }
      else if(num==1)
      {
         cout<<"1";
      }
 
      else
      {
         while(j<=num)
      {
         v.push_back(j);
         j=j+2;
      }
      while (i<=num)
      {
         v.push_back(i);
         i=i+2;
      }
      
      loop(i,v.size())
      {
         cout<<v[i]<<" ";
      }
      }
 
}