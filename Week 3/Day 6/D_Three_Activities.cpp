#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n),b(n),c(n);
        vector<pair<ll,ll>>v1,v2,v3;
        map<ll,ll>mp;
        for(ll i = 0;i<n; i++){
            cin>>a[i];
            v1.push_back({a[i],i});
        }
        for(ll i = 0;i<n; i++){
            cin>>b[i];
            v2.push_back({b[i],i});
        }
        for(ll i = 0;i<n; i++){
            cin>>c[i];
            v3.push_back({c[i],i});
        }
        sort(v1.begin(),v1.end(),greater<pair<ll,ll>>());
        sort(v2.begin(),v2.end(),greater<pair<ll,ll>>());
        sort(v3.begin(),v3.end(),greater<pair<ll,ll>>());
        ll mx = LLONG_MIN;
        for(ll i=0;i<3;i++){
            for(ll j = 0;j<3;j++){
                for(ll k = 0;k<3; k++){
                    if(v1[i].second != v2[j].second && v2[j].second != v3[k].second && v1[i].second != v3[k].second){
                        mx = max(mx,(v1[i].first+v2[j].first+v3[k].first));
                    }
                }
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}