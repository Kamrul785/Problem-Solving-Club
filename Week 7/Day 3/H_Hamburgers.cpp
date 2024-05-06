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
    ll n1, n2, n3, p1, p2, p3, rub;
    cin >> n1 >> n2 >> n3;
    cin >> p1 >> p2 >> p3;
    cin >> rub;
    ll a = 0, b = 0, c = 0;
    for (auto &ch : s)
    {
        if (ch == 'B')
            a++;
        else if (ch == 'S')
            b++;
        else
            c++;
    }

    // auto ok = [&](int mid)
    // {
    //     ll x = max((a * mid) - n1, 0ll);
    //     ll y = max((b * mid) - n2, 0ll);
    //     ll z = max((c * mid) - n3, 0ll);
    //     ll reqprice = (x * p1 + y * p2 + z * p3);

    //     return reqprice <= rub;
    // };
    ll l = 0, r = rub + 200, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll m = 0;
        ll x = max((a * mid) - n1, m);
        ll y = max((b * mid) - n2, m);
        ll z = max((c * mid) - n3, m);
        ll reqprice = (x * p1 + y * p2 + z * p3);
        if (reqprice <= rub)
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
