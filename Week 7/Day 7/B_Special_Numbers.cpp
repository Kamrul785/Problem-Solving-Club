#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
const ll mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll ans = 0;
        ll p = 1;
        for (ll i = 0; i < 32; i++)
        {
            if (((k >> i) & 1) == 1)
                ans = (ans + p) % mod;
            p *= n;
            p = p % mod;
        }
        cout << ans << endl;
    }
    return 0;
}