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
        ll n, t;
        cin >> n >> t;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        auto ok = [&](ll mid)
        {
            ll cnt = 0;
            for (ll i = 0; i < n; i++)
            {
                cnt += max((mid - a[i]), 0LL);
            }
            return cnt <= t;
        };
        
        ll l = 0, r = 2e9, ans = 0;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}