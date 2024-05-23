#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll i = 0, j = 0, sum = 0, cnt = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<ll, int> mp;
    mp[0]++;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        cnt += mp[sum - k]; 
        mp[sum]++; 
    }
    cout << cnt << endl;
    return 0;
}