#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), pre(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        pre[0] = a[0];
        for (ll i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + a[i];
        }
        ll gcd = 1;
        for (ll i = 0; i < n-1; i++)
        {
            ll gcd1 = __gcd(pre[i], (pre[n - 1] - pre[i]));
            gcd = max(gcd, gcd1);
        }
        cout << gcd << endl;
    }
    return 0;
}