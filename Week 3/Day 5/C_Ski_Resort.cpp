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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll ans = 0, cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                cnt++;
                if (i == n - 1 || a[i + 1] > q)
                {
                    if (cnt >= k)
                    {
                        ll x = cnt - k + 1;
                        ans += (x * (x + 1)) / 2;;
                    }
                    cnt=0;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}