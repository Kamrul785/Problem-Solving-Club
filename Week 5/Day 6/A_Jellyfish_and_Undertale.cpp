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
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> v(n);
        ll ans = b;
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i] < a) ans+=v[i];
            else ans+= a - 1;
        }   
        cout<<ans<<endl;
    }
    return 0;
}