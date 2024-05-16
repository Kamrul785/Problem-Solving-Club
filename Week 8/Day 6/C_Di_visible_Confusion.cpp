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
        ll n;
        cin >> n;
        vector<ll> a(n+1);
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        int ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll idx = 0;
            for (ll j = 2; j <= i + 1; j++)
            {
                if (a[i] % j != 0)
                {
                    idx = 1;
                    break;
                }
            }
            if (idx == 0)
            {
                ans = 1;
                break;
            }
        }
        if (ans == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}