#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
bool isprime(ll n)
{
    if (n == 1)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool isPerfectSquere(ll n)
{
    ll x = sqrtl(n);
    return (x * x) == n;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    for (ll i = 0; i < n; i++)
    {
        if (isprime(sqrtl(a[i])) && isPerfectSquere(a[i]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}