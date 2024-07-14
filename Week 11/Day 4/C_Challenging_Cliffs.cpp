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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll li = 0, ri = 0;
        ll mn = LLONG_MAX;
        sort(a.begin(), a.end());

        for (ll i = 0; i < n - 1; i++)
        {
            if (abs(a[i] - a[i + 1]) < mn)
            {
                li = i, ri = i + 1;
                mn = abs(a[i] - a[i + 1]);
            }
        }

        cout << a[li] << " ";
        for (ll i = 0; i < li; i++)
        {
            cout << a[i] << " ";
        }
        for (ll i = ri + 1; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << a[ri] << endl;
    }
    return 0;
}