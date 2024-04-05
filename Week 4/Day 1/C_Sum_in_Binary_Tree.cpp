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
        ll sum =0;
        while(n >= 1){
            sum+=n;
            n/=2;
        }
        cout<<sum<<endl;
    }
    return 0;
}