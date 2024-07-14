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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        map<int, int> cnt;
        int mx = 0;
        for (auto x : a)
        {
            cnt[x]++;
        }
        for (auto x : cnt)
        {
            mx = max(mx, x.second);
        }
        int ans = 0;
        if (2 * mx > n)
        {
            ans = mx - (n - mx);
        }
        else
        {
            ans = n % 2;
        }
        cout<<ans<<endl;
        // cout<<mx<<"->" << ans << endl;
    }
    return 0;
}