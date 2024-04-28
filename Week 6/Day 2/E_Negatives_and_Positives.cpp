#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
ll sum(vector<int> a, int n)
{
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i];
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        ll ans = 0,neg = 0;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] < 0){
                neg++;
            }
            ans +=abs(a[i]);
            mn = min(mn,abs(a[i]));
        }
        if(neg%2==1){
            ans -= 2*mn;
        }
        cout<<ans<<endl;
    }
    return 0;
}