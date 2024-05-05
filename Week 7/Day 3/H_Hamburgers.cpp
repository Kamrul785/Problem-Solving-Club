#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    ll nb, ns, nc, pb, ps, pc;
    cin >> nb >> ns >> nc >> pb >> ps >> pc;
    ll rub;
    cin >> rub;

    ll a = 0, b = 0, c = 0;
    for (auto &c : s)
    {
        if (c == 'B')
            a++;
        else if (c == 'S')
            b++;
        else
            c++;
    }

    auto ok = [&](ll mid)
    {
        ll z = 0;
        ll rb = max(((a * mid) - nb), z);
        ll rs = max(((b * mid) - ns), z);
        ll rc = max(((c * mid) - nc), z);
        ll reqprice = rb * pb + rs * ps + rc * pc;
        return reqprice <= rub;
    };

    ll l = 0, r = rub + 200, ans = 0;
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