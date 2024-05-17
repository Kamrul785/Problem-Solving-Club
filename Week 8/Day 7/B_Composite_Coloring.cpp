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
        vector<ll> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        ll n;
        cin >> n;
        vector<ll> ans(n, 0), cadd(50, -1);
        ll cnt = 0;
        ll x;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            for (ll j = 0; j < v.size(); j++)
            {
                if (x % v[j] == 0)
                {
                    if (cadd[v[j]] == -1)
                        cnt++, cadd[v[j]] = cnt;
                    ans[i] = cadd[v[j]];
                    break;
                }
            }
        }
        cout << cnt << endl;
        for (auto x : ans)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}