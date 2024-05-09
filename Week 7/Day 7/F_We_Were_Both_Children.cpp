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
        ll n;
        cin >> n;
        vector<ll> a(n);
        unordered_map<ll, ll> mp;
        vector<int> freq(n + 1, 0);

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= n)
                mp[a[i]]++;
        }
        for (auto [a, b] : mp)
        {
            for (int i = a; i <= n; i += a)
            {
                freq[i] += b;
            }
        }
        ll sum = *max_element(freq.begin(), freq.end());
        cout << sum << endl;
    }
    return 0;
}