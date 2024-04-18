#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
#define vi vector<int> 
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
        vi a(n);
        for(int i = 0 ;i<n;i++) cin>>a[i];
        int ans = a[0];
        for(int i = 1;i<n;i++) ans&=a[i];
        cout<<ans<<endl;
    }
    return 0;
}