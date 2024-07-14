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
        ll n, m;
        cin >> n >> m;
        // vector<vector<ll>> a, ans(n, vector<ll>(m));
        vector<int> a[n+4];
        vector<int> ans[n+3];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                a[i].push_back(x);
            }
        }
        for (ll i = 0; i < n; i++)
        {
            sort(a[i].begin(), a[i].end());
        }
        for (int i = 0; i < m; i++)
        {
            int mn = INT_MAX;
            int idx = -1;
            for (int j = 0; j < n; j++)
            {
                if (a[j][0] < mn)
                {
                    mn = a[j][0];
                    idx = j;
                }
            }
            for (int j = 0; j < n; j++)
            {
                if (j == idx)
                {
                    ans[j].push_back(a[j][0]);
                    a[j].erase(a[j].begin());
                }
                else
                {
                    ans[j].push_back(a[j][a[j].size() - 1]);
                    a[j].pop_back();
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}