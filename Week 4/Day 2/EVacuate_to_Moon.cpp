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
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end(), greater<int>());
        ll ans = 0;
        int idx = min(n, m);
        // cout<<idx<<endl;
        for (int i = 0; i < idx; i++)
        {
            ans += min(1ll * b[i] * h, 1ll * a[i]);
        }
        // cout<<b.front()<<" * "<<h<<" = "<<endl;
        cout << ans << endl;
    }
    return 0;
}