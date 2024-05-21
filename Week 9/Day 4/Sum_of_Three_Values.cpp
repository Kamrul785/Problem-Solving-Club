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
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    ll x = -1,
        y = -1, z = -1;
    if (n < 3)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }
    bool flag = false;
    ll i = 0;
    while (i < n)
    {
        ll j = i + 1, k = n - 1;
        while (j < k)
        {
            ll sum = a[j].first + a[k].first + a[i].first;
            if (sum == m)
            {
                flag = true;
                x = a[i].second, y = a[j].second, z = a[k].second;
                break;
            }
            else if (sum < m)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
        if (flag)
            break;
        i++;
    }

    if (flag)
    {

        cout << x << " " << y << " " << z << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}