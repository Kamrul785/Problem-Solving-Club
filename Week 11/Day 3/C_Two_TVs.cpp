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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    map<ll, ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }
    bool ok = true;
    ll sum = 0;
    // for (auto x : a)
    //     cout << x.second<<" ";
    // cout << endl;
    for (auto [idx, val] : a)
    {
        sum += val;
        if (sum > 2)
        {
            ok = false;
            break;
        }
    }
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}