#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
//  support Session e giye  23 number line if (((i >> j) & 1) != 0) buje nite hobe
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        int cnt = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
        for (int j = 0; j < n; j++)
        {
            if (((i >> j) & 1) != 0)
            {
                sum += a[j];
                cnt++;
                mn = min(mn, a[j]);
                mx = max(mx, a[j]);
            }
        }
        if (sum >= l && sum <= r && (mx - mn) >= x && cnt >= 2)
            ans++;
    }
    cout << ans << endl;
    return 0;
}