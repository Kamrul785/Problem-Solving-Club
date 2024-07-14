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
        ll n, a, b;
        cin >> n >> a >> b;
        ll ans = 0;
        if (a >= b)
        {
            ans = n * a;
        }
        else
        {
            ll diff = b - a;
            if (diff > n)
            {
                diff = n;
                ans += (diff * b) - ((diff * (diff - 1)) / 2);
            }
            else{
                ans = (diff * b) - ((diff * (diff - 1)) / 2);
                n = n - diff;
                ans += n*a;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}