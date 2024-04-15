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
        int k = 1;
        while(k<=n){
            k*=2;
        }
        cout<<(k/2)-1<<endl;
    }
    return 0;
}