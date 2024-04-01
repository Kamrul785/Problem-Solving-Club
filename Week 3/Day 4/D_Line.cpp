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
        string s;
        cin >> s;
        vector<ll> check;
        ll totalsum = 0;
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            ll l = i;
            ll r = n - i - 1;
            if (s[i] == 'L')
            {
                if (r > l)
                {
                    cnt++;
                    totalsum += r;
                    check.push_back(r - l);
                }
                else
                {
                    totalsum += l;
                }
            }
            else
            {
                if (l > r)
                {
                    cnt++;
                    totalsum += l;
                    check.push_back(l - r);
                }
                else
                {
                    totalsum += r;
                }
            }
        }
        vector<ll> ans(n + 1);
        for (ll i = cnt; i <= n; i++)
        {
            ans[i] = totalsum;
        }
        sort(check.begin(), check.end(), greater<ll>());
        for (ll i = cnt - 1; i >= 1; i--)
        {
            totalsum -= check.back();
            ans[i] = totalsum;
            check.pop_back();
        }
        for (ll i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}