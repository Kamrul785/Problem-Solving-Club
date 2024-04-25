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
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        if(b < (s%n)){
            cout<<"NO"<<endl;
            continue;
        }
        if(((a*n*1LL)+b)*1LL >= s){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}