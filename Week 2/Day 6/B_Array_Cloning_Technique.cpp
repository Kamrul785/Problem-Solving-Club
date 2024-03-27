#include <bits/stdc++.h>
#define ll long long
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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll, ll> freq;
        for (ll i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }
        ll mx = 0;
        for (auto x : freq)
        {
            mx = max(mx, x.second);
        }
        ll ans = 0;
        while (mx < n)
        {
            ll rem = n - mx;
            ll add = mx;
            ans++;
            ans += min(rem, mx);
            mx += min(rem, mx);
        }
        cout << ans << endl;
    }
    return 0;
}