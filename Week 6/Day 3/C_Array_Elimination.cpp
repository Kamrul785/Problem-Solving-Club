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
        for(ll i =0 ;i<n;i++) cin>>a[i];
        ll b[30] = {0};
        for(ll i = 0;i<30;i++){
            for(ll j = 0; j<n;j++){
                if((a[j]&(1 << i)) != 0) b[i]++;
            }
        }
        for(ll i = 1; i<= n; i++){
            bool ok = true;
            for(ll j = 0;j<30; j++){
                if(b[j] % i != 0){
                    ok = false;
                    break;
                }
            }
            if(ok)cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}




// #include <bits/stdc++.h>
// #define endl '\n'
// #define ll long long ll
// #define fl float
// using namespace std;
// ll main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll a[n];
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         ll bit[30] = {0};
//         for (ll i = 0; i < 30; i++)
//         {
//             // ll num=(1ll<<i);
//             for (ll j = 0; j < n; j++)
//             {
//                 if ((a[j] & (1 << i)) != 0)
//                     bit[i]++;
//             }
//             // cout<<i<<" "<<bit[i]<<"\n";
//         }
//         for (ll k = 1; k <= n; k++)
//         {
//             bool ok = true;
//             for (ll i = 0; i < 30; i++)
//             {
//                 if ((bit[i] % k) != 0)
//                 {
//                     ok = false;
//                     break;
//                 }
//             }
//             if (ok)
//                 cout << k << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #define endl '\n'
// #define ll long long
// #define fl float
// using namespace std;
// ll main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         vector<ll> a(n), ans;
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         ll b[32];
//         for (ll i = 0; i < 32; i++)
//         {
//             for (ll j = 0; j < n; j++)
//             {
//                 if ((a[j] & (1 << i)))
//                 {
//                     b[i]++;
//                 }
//             }
//         }
//         for (ll i = 1; i < n + 1; i++)
//         {
//             bool ok = true;
//             for (ll j = 0; j < 32; j++)
//             {
//                 if (b[j] % i != 0)
//                 {
//                     ok = false;
//                     break;
//                 }
//             }
//             if (ok)
//                 ans.push_back(i);
//         }
//         sort(ans.begin(), ans.end());
//         for (auto x : ans)
//             cout << x << " ";
//         cout << endl;
//     }
//     return 0;
// }