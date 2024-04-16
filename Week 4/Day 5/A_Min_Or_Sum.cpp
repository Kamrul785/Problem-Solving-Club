#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main ()
{
    // codeforce e submit kora baki
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i =0;i<n;i++) cin>>a[i];
        ll ans = 0;
        for(int i =0;i<n;i++){
            ans|=a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}