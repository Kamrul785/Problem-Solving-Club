#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    map<ll, ll> ans;

    for (ll i = 0; i < n; i++)
    {
        map<ll, ll> cnt;
        for (ll j = 2; j * j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                while (a[i] % j == 0)
                {
                    cnt[j]++;
                    a[i] /= j;
                }
            }
        }
        if (a[i] > 1)
        {
            cnt[a[i]]++;
        }
        for (auto v : cnt)
        {
            ans[v.first]++;
        }
    }

    ll x = 1;
    for (auto it : ans)
    {
        if (it.second > x)
        {
            x = it.second;
        }
    }

    cout << x << endl;

    return 0;
}