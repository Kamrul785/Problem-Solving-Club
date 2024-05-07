#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    auto ok = [&](ll mid)
    {
        ll cnt = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > mid)
                return false;
            sum += a[i];
            if (sum > mid)
            {
                cnt++;
                sum = a[i];
            }
        }
        if (sum < mid)
            cnt++;
        return cnt <= k;
    };

    ll l = 0, r = 1e16, mid, ans = 0;
    while (l <= r)
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

    return 0;
}