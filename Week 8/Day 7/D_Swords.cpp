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
    vector<ll> a(n), v;
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    ll sum = 0;
    for (auto x : a)
    {
        if (mx > x)
        {
            v.push_back(mx - x);
            sum += mx - x;
        }
    }
    v.push_back(sum);
    ll gcd = v[0];
    for (ll i = 1; i < v.size(); i++)
    {
        gcd = __gcd(gcd, v[i]);
    }
    ll z = gcd, y = sum / gcd;
    cout << y << " " << z << endl;

    return 0;
}