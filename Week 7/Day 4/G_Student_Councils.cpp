#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll k, n;
    cin >> k >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    auto ok = [&](ll mid)
    {
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += min(a[i], mid);
        }
        return sum >= (mid * k);
    };
    // cout<< sum / k <<endl;

    ll l = 0, r = 1e12, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}