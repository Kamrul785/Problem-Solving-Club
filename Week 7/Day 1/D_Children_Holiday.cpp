#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n;
    cin >> m >> n;
    vector<tuple<int, int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        a[i] = make_tuple(x, y, z);
    }

    vector<int> can(n);
    auto ok = [&](int mid)
    {
        vector<int> may(n);
        int has = m;
        for (int i = 0; i < n; i++)
        {
            tuple<int, int, int> T = a[i];
            int t = get<0>(T);
            int z = get<1>(T);
            int y = get<2>(T);
            int total = (t * z) + y;
            int full = mid / total;
            int rem = mid % total;
            int cur = (full * z) + min(z, (rem / t));
            cur = min(cur, has);
            has -= cur;
            may[i] = cur;
        }

        if (!has)
        {
            for (int i = 0; i < n; i++)
            {
                can[i] = may[i];
            }
        }
        return (!has);
    };

    int l = 0, r = 1e8, mid, ans = 0;
    while (l<=r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    for (auto x : can)
    {
        cout << x << " ";
    }

    return 0;
}