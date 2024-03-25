#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0, l = 0, r = 0, ans = 0, cnt = 0;
    while (r < n) 
    {
        sum += a[r];  
        if (sum >= s) 
        {
            while(sum >= s && l<=r){
                ans += (n-r);
                sum-= a[l];
                l++;
            }
        }
        r++; 
    }
    cout << ans << endl;
    return 0;
}