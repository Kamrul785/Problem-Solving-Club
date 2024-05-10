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
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> que;

        for (ll i = 0; i < q; i++)
        {
            ll x;
            cin >> x;
            if(que.empty() || que.back() > x)
            que.push_back(x);
        }

        for (ll i = 0; i < n; i++)
        {
            for (auto x : que)
            {
                if (a[i] % (1 << x) == 0)
                {
                    x--;
                    a[i] += (1 << x);
                }
            }
        }

        for (auto x : a)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}