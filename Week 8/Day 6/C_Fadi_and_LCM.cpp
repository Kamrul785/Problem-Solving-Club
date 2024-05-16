#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
ll lmc(ll a, ll b)
{
    return ((a / __gcd(a, b)) * b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll a, b;
    for (ll i = 1; i * i <= n; i++)
    {
        ll x = i, y = n / i;
        if (__gcd(x, y) == 1)
        {
            a = x, b = y;
        }
    }
    cout << a << " " << b << endl;
    return 0;
}