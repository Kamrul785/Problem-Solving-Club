#include <bits/stdc++.h>
#define ll long long
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
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        //ll x;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > (i + 1))
            {
                //x = a[i] - (i + 1);
                ans = max(ans, (a[i] - (i + 1)));
            }
        }
        cout << ans << endl;
    }
    return 0;
}