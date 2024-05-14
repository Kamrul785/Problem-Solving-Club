#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b)
{
    return ((a / gcd(a, b)) * b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, a, b, p, q, ans = 0, overlab;
    cin >> n >> a >> b >> p >> q;
    ans += (n / a) * p;
    ans += (n / b) * q;
    overlab = (n / lcm(a, b));
    ans -= (overlab * (p + q));
    ans += (overlab * max(p, q));
    cout << ans << endl;
    return 0;
}