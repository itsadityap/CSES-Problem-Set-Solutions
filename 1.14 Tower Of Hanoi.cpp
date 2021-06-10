/*
    Date:               16/05/2021
    Author:             Aditya Pandey
*/
#include <bits/stdc++.h>
using namespace std;
#define int              long long
#define endl             "\n"
#define MOD              1000000007
void toh(int n,int a,int b,int c)
{ 
   if (n==0)
   {return ;
   }
   toh(n-1,a,c,b);
   cout<<a<<" "<<b<<endl;
   toh(n-1,c,b,a);
}
signed main()
{  
   int x;
   cin>>x;
   cout<<((2<<(x-1))-1)<<endl;
   toh(x,1,3,2);
}