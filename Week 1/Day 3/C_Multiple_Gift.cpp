#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b;
    cin>>a>>b;
    ll cnt = 0;
    ll p = a;
    while(p <= b){
        p*=2;
        cnt++;
    }
    cout<<cnt;
    return 0;
}