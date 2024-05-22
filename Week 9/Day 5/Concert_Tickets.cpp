#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    multiset<ll> s;
    for (auto x : a)
        s.insert(x);

    for (ll i = 0; i < m; i++)
    {
        auto it = s.upper_bound(b[i]);
        if (it == s.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *(--it) << endl;
            s.erase(it);
        }
    }

    return 0;
}