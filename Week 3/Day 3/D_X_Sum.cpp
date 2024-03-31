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
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        for(ll i=0 ;i<n;i++){
            for(ll j =0; j<m;j++){
                cin>>a[i][j];
            }
        }
        ll ans = 0;
        for(ll i=0;i<n;i++){
            for(ll j =0; j<m;j++){
                ll x = i,y = j,sum = 0;
                while(x >= 0 && x<n && y>=0 && y<m){
                    sum+=a[x][y];
                    x--;
                    y--;
                }
                x = i,y = j;
                
                while(x >= 0 && x<n && y>=0 && y<m){
                    sum+=a[x][y];
                    x++;
                    y++;
                }

                x = i,y = j;
                while(x >= 0 && x<n && y>=0 && y<m){
                    sum+=a[x][y];
                    x++;
                    y--;
                }
                x = i,y = j;
                while(x >= 0 && x<n && y>=0 && y<m){
                    sum+=a[x][y];
                    x--;
                    y++;
                }
                x = i,y=j;
                sum-=a[x][y]*3;
                ans=max(ans,sum);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}