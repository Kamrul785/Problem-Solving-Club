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
        ll n, k, q;
        cin >> n >> k >> q;
        ll a[k + 1], b[k + 1];
        a[0] = 0, b[0] = 0;
        for (ll i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        for (ll i = 1; i <= k; i++)
        {
            cin >> b[i];
        }
        while (q--)
        {
            ll d;
            cin >> d;
            if (d == 0)
            {
                cout << 0 << " ";
                continue;
            }
            if (d == n)
            {
                cout << b[k] << " ";
                continue;
            }
            ll idx = upper_bound(a, a + k + 1, d) - a;
            ll ans = b[idx - 1];

            ll s1 = a[idx] - a[idx - 1];
            ll t = b[idx] - b[idx - 1];

            ll s2 = d - a[idx - 1];
            ll t2 = (s2 * t) / s1;

            ans += t2;
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}