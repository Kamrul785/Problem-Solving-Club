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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        auto ok = [&](ll k)
        {
            multiset<ll> s;
            for (auto x : a)
            {
                s.insert(x);
            }
            for (ll i = 1; i <= k; i++)
            {
                if (s.empty())
                    return false;
                // Alice move
                ll req = k - i + 1;
                auto it = s.upper_bound(req);
                if (it == s.begin())
                    return false;
                it--;
                s.erase(it);

                // Bob Move

                if (!s.empty())
                {
                    it = s.begin();
                    ll x = (*it);
                    x += (req);
                    s.erase(it);
                    s.insert(x);
                }
            }
            return true;
        };

        ll l = 0, r = n, ans = 0;
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
