#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0;
    ll odd = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum+=a[i];
        if(a[i]%2 !=0){
            odd = min(odd,a[i]);
        }
    }
    if(sum % 2 == 0){
        cout<<sum<<'\n';
    }
    else{
        cout<<sum-odd<<'\n';
    }
    return 0;
}