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
    cin>>t;
    while(t--){
        ll n , k;
        cin>>n>>k;
        if(k%2){
            cout<<"NO"<<endl;
            continue;
        }
        vector<ll>a(n+1);
        for(ll i = 1;i<=n;i++){
            a[i] = i;
        }
        k/=2;
        ll x =  n-1;
        for(ll i = 1; i<= n ;i++){
            if(k<=x){
                swap(a[i],a[i+k]);
                k = 0;
                break;
            }
            swap(a[i],a[i+x]);
            k -= x;
            x -= 2;
            if(x <= 0) break;
        }
        if(k > 0){
            cout<<"No"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(ll i = 1;i<=n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}