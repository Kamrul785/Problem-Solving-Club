#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
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
        pbds<ll> p;
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        p.insert(a[0]);
        for (ll i = 1; i < n; i++)
        {
            cnt += p.order_of_key(a[i] - 1);
            p.insert(a[i]);
        }
        // for(auto x:p){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        cout << cnt << endl;
    }
    return 0;
}