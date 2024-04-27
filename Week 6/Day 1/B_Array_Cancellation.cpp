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
        ll neg = 0, pos = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                pos += a[i];
            }
            else
            {
                if (pos > abs(a[i]))
                {
                    pos -= abs(a[i]);
                }
                else
                {
                    neg += (a[i] + pos);
                    pos = 0;
                }
            }
        }
        cout << pos << endl;
        
    }
    return 0;
}