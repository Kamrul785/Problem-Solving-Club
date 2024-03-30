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
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        vector<ll> pre(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        pre[0] = a[0];
        for (ll i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + a[i];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll sum = 0;
            l--, r--;
            if (l > 0)
                sum += pre[l - 1];
            sum += (pre[n-1] - pre[r]) + ((r-l+1)*k);
            if(sum%2 == 1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}