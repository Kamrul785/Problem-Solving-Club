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
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool ok = false;
        ll diff = -1, zdiff = 0;
        for (ll i = 0; i < n; i++)
        {
            if (b[i] > a[i])
            {
                ok = true;
                break;
            }
            if (b[i] != 0)
            {
                if (diff == -1)
                {
                    diff = a[i] - b[i];
                }
                else
                {
                    if (diff != (a[i] - b[i]))
                    {
                        ok = true;
                        break;
                    }
                }
            }
            else
            {
                zdiff = max(zdiff, a[i]);
            }
        }
        if (ok)
        {
            cout << "NO" << endl;
            continue;
        }
        if (diff == -1 || zdiff <= diff)
        {
            cout << "YES" << endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}