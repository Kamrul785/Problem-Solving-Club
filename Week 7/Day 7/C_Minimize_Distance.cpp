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
        ll n, k;
        cin >> n >> k;
        vector<ll> a, b;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x > 0)
            {
                a.push_back(x);
            }
            else
            {
                b.push_back(-x);
            }
        }
        if (!a.empty())
        {
            sort(a.begin(), a.end(), greater<ll>());
        }
        if (!b.empty())
        {
            sort(b.begin(), b.end(), greater<ll>());
        }
        ll sum = 0;
        if (!a.empty())
        {
            for (ll i = 0; i < a.size(); i += k)
            {
                sum += 2 * a[i];
            }
        }
        if (!b.empty())
        {
            for (ll i = 0; i < b.size(); i += k)
            {
                sum += 2 * b[i];
            }
        }
        if (!b.empty() && !a.empty())
        {
            sum -= max(a[0], b[0]);
        }
        else if (b.empty())
        {
            sum -= a[0];
        }
        else if (a.empty())
        {
            sum -= b[0];
        }
        else
        {
            sum = 0;
        }
        cout << sum << endl;
    }
    return 0;
}