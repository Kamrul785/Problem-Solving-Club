#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
ll invcnt(vector<ll> a, ll n)
{
    ll ans = 0, cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cnt++;
        }
        else
        {
            ans += cnt;
        }
    }
    return ans;
}
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

        ll ans = invcnt(a, n);
        ll idx = -1;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                a[i] = 1;
                idx = i;
                break;
            }
        }
        ans = max(ans, invcnt(a, n));
        if (idx != -1)
        {
            a[idx] = 0;
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] == 1)
            {
                a[i] = 0;
                break;
            }
        }
        ans = max(ans, invcnt(a, n));
        cout << ans << endl;
    }
    return 0;
}