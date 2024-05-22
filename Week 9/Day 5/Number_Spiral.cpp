#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll ans = -1;
        if (y > x)
        {
            if (y % 2 != 0)
            {
                ans = (y * y) - x + 1;
            }
            else
            {
                ans = (y - 1) * (y - 1) + x;
            }
        }
        else
        {
            if (x % 2 != 0)
            {
                ans = (x - 1) * (x - 1) + y;
            }
            else
            {
                ans = (x * x) - y + 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}