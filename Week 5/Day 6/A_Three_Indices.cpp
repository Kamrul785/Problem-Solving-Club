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
        int a[n];
        for(int i =0;i<n;i++) cin>>a[i];
        bool ok = false;
        int idx = 0;
        for(int i = 1; i<n-1;i++){
            if(a[i] > a[i-1] && a[i] > a[i+1]){
                ok = true;
                idx = i;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
            cout<<idx-1+1<<" "<<idx+1<<" "<<idx+2<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}