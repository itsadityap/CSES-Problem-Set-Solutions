/*
    Date:              11/01/2022
    Author:            Aditya Pandey
*/
#include<bits/stdc++.h>
using namespace std;
#define ll               long long int
#define br               "\n"
#define MOD              1000000007
#define min3(a, b, c)       min(c, min(a, b))
#define min4(a, b, c, d)    min(d, min(c, min(a, b)))
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

signed main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    ll cost = 0;

    for (int i = 0; i < n; i++)
    {
        cost += abs(arr[i] - arr[n / 2]);
    }
    cout << cost;
}