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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(k);
        for (ll i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        auto ok = [&](ll mid)
        {
            ll cnt = 0;
            for (ll i = 0; i <= mid; i++)
            {
                cnt += (n - a[i]);
            }
            return cnt < n;
        };

        ll l = 0, r = k - 1, ans = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
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
        cout << ans + 1 << endl;
    }
    return 0;
}