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
        for(ll i =0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<ll>());
        priority_queue<ll>pq;
        pq.push(a[0]);
        for(ll i = 1;i<n;i++){
            if(pq.top() >= a[i]){
                ll m = pq.top() ^ a[i];
                pq.pop();
                pq.push(m);
            }
            else{
                pq.push(a[i]);
            }
        }
        cout<<pq.size()<<endl;
    }
    return 0;
}