#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<ll> pre(n + 2, 0);
        for (int i = 1; i <= n; i++)
        {
            pre[i] = (a[i] + pre[i - 1]);
        }

        vector<ll> ans(q);
        vector<pair<ll, int>> k(q);
        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            k[i] = {x, i};
        }
        sort(k.begin(), k.end());
        int check = 0;
        for (int i = 0; i < q; i++)
        {
            while (1)
            {
                if (check == n || a[check + 1] > k[i].first)
                    break;
                check++;
            }
            ans[k[i].second] = pre[check];
        }
        for (int i = 0; i < q; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}