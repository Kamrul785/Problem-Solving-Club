#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    pbds<ll> p;
    for (ll i = 0; i < k; i++)
    {
        p.insert(a[i]);
    }
    auto it = p.find_by_order((k - 1) / 2);
    ll o_mid = *it;
    ll cnt = 0;
    for (ll i = 0; i < k; i++)
    {
        cnt += abs(a[i] - o_mid);
    }
    cout << cnt << " ";
    for (ll i = 0; i < n - k; i++)
    {
        auto it = p.find_by_order(p.order_of_key(a[i]));
        p.erase(it);
        p.insert(a[i + k]);
        auto itt = p.find_by_order((k - 1) / 2);
        ll mid = *itt;
        cnt += abs(mid - a[i + k]) - abs(o_mid - a[i]);
        if (k % 2 == 0)
            cnt -= (mid - o_mid);
        o_mid = mid;
        cout << cnt << " ";
    }

    return 0;
}