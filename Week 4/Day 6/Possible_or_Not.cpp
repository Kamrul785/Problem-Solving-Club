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
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i =0;i<n;i++) cin>>a[i];
        bool ok = true;
        int cnt = -1;
        for(int i =0;i<n;i++){
            if((a[i] & k) == k){
                cnt&=a[i];
            }
        }
        if(cnt == k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}