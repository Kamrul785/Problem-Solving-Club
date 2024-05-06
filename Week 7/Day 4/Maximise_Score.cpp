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
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        vector<ll> ans;
        for (ll i = 0; i < n; i++)
        {
            ll ans1 = -1;
            ll ans2 = -1;
            if (i - 1 >= 0)
                ans1 = abs(a[i] - a[i - 1]);
            if (i+1 < n)
                ans2 = abs(a[i] - a[i + 1]);
            ans.push_back(max(ans1, ans2));
        }
        ll mn = LLONG_MAX;
        for (ll i = 0; i < ans.size(); i++)        
        {
            mn = min(mn, ans[i]);
        }
        cout << mn << endl;
    }
    return 0;
}