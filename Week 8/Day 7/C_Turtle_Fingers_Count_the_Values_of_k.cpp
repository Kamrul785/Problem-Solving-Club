#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, l;
        cin >> a >> b >> l;
        int p = 0;
        set<ll>k;
        while(1){
            ll x = pow(a,p);
            if(x > l) break;
            if(l % x != 0) break;
            ll cur = l / x;
            k.insert(cur);
            while(cur % b == 0){
                cur/=b;
                k.insert(cur);
            }
            p++;
        }
        cout << k.size() << endl;
    }
    return 0;
}