#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// ll a[100005];
// ll d[100005];
// ll p[100005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n + 1), d(1e6), p(1e6);
    vector<pair<ll, ll>> opn(m + 1);
    vector<ll> val(m + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 1; i <= m; i++)
    {
        ll l, r, x;
        cin >> l >> r >> x;
        opn[i] = {l, r};
        val[i] = x;
    }
    for (ll i = 1; i <= k; i++)
    {
        ll l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }
    for (ll i = 1; i <= m; i++)
    {
        d[i] += d[i - 1];
    }
    for (ll i = 1; i <= m; i++)
    {
        val[i] *= d[i];
    }
    for (ll i = 1; i <= m; i++)
    {
        ll l = opn[i].first, r = opn[i].second;
        p[l] += val[i];
        p[r + 1] -= val[i];
    }
    for (ll i = 1; i <= n; i++)
    {
        p[i] += p[i - 1];
    }
    for (ll i = 1; i <= n; i++)
    {
        cout << p[i] + a[i] << " ";
    }
    return 0;
}