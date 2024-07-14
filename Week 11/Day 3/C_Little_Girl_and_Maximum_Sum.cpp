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
    int n, q;
    cin >> n >> q;
    vector<int> a(n), d(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        d[l]++;
        d[r + 1]--;
    }
    for (int i = 1; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i];
    }
    ll ans = 0;
    sort(a.begin(),a.end(),greater<int>());
    sort(d.begin(),d.end(),greater<int>());
    for (int i = 0; i < n; i++)
    {
        ans += (1ll * d[i] * a[i]);
    }
    cout << ans << endl;
    return 0;
}