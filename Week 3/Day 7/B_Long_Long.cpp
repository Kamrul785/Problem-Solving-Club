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
        ll sum = 0,cnt =0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        // ll cnt =0;
        bool flag = false;
        for(ll i=0;i<=n;i++){
            if(i<n) sum+=(abs(a[i]));
            // cout<<sum<<" ";
            if(flag){
                if(i == n || a[i] > 0){
                    cnt++;
                    flag = false;
                }
            }
            else{
                if(a[i] < 0){
                    flag = true;
                }
            }
        }
        // cout<<endl;
        cout<<sum<<" "<<cnt<<endl;
    }
    return 0;
}