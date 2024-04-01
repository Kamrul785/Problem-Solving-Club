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
        vector<ll>a(n);
        for(ll i = 0 ;i<n;i++){
            cin>>a[i];
        }
        priority_queue<ll>pq;
        ll ans = 0;
        for(ll x:a){
            if(x > 0){
                pq.push(x);
            }
            else{
                if(!pq.empty()){
                    ans+=pq.top();
                    pq.pop();
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}