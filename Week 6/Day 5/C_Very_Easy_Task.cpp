#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y;
    cin>>n>>x>>y;

    auto ok = [&](ll m){
        if(m < min(x,y)) return false;
        int cnt = 1;
        m -= min(x,y);
        cnt += m/x + m/y;
        return cnt >= n; 
    };

    ll l = 0 , r = 2e9 , ans;
    while(l<= r){
        ll mid  = (l+r)/2;
        if(ok(mid)){
            ans = mid ;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout<<ans<<endl;
    return 0;
}