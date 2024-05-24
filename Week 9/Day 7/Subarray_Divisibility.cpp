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
    map<ll, ll> mp;
    ll sum = 0;
    mp[0]++;
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i] % n;
        sum = (sum + n) % n;
        cnt += mp[sum];
        mp[sum]++;
    }
    cout << cnt << endl;
    return 0;
}