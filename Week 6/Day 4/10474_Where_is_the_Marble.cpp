#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, q;
    ll idx = 1;
    while (cin >> n >> q)
    {
        if (n == 0 && q == 0)
            break;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        // for(int i =0 ;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        cout << "CASE# " << idx << ":" << endl;
        while (q--)
        {
            ll x;
            cin >> x;
            ll l = 0, r = n - 1, ans = 0;
            bool ok = false;
            while (l <= r)
            {
                ll mid = (l + r) / 2;
                if (a[mid] >= x)
                {
                    ans = mid;
                    r = mid - 1;
                    if (a[mid] == x)
                        ok = true;
                }
                else
                    l = mid + 1;
            }
            if (!ok)
                cout << x << " not found" << endl;
            else
                cout << x << " found at " << ans + 1 << endl;
        }
        idx++;
    }
    return 0;
}