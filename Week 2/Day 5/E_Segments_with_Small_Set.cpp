#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i = 0; i<n; i++){
        cin>>a[i];
    }
    unordered_map<ll,ll>freq;
    ll ans = 0, l = 0 , r = 0;
    while(r<n){
        freq[a[r]]++;
        while(freq.size() > k && l<=r){
            freq[a[l]]--;
            if(freq[a[l]] == 0){
                freq.erase(a[l]);
            }
            l++;
        }
        ans+= (r-l+1);
        r++;
    }
    cout<<ans<<endl;
    return 0;
}