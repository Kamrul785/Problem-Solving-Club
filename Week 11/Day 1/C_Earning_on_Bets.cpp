#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
        vector<ll> a(n),ans(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll lcm = a[0];
        for (ll i = 1; i < n; i++)
        {
            lcm = (lcm * a[i]) / __gcd(lcm, a[i]);
        }
        ll sum = 0;
        for(ll i =0 ;i<n;i++){
            ans[i] = lcm/a[i];
            sum+= ans[i];
        }
        if(sum < lcm){
            for(ll i =0 ;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}