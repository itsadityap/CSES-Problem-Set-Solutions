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
    ll t;
    cin >> t;
    while (t--)
    {
        ll x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        ll slope = ((y2 - y1) * (x3 - x2)) - ((y3 - y2) * (x2 - x1));
        //cout<<slope1<<" "<<slope2;
        if (slope == 0)
        {
            cout << "TOUCH" << br;
        }
        else if (slope > 0)
        {
            cout << "RIGHT" << br;
        }
        else
        {
            cout << "LEFT" << br;
        }
    }

}