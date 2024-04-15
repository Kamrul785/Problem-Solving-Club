#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        map<int,int>cnt;
        for(int i =0;i<n;i++){
            cin>>a[i];
            cnt[__lg(a[i])]++;
        }
        ll ans = 0;
        for(auto [x,y] : cnt){
            ans+= (1LL * y * (y-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}