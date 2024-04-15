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
        for(int i =0;i<n;i++) cin>>a[i];
        int x = 0;
        for(auto i:a){
            x^=i;
        }
        if(x==0){
            cout<<0<<endl;
            continue;
        }
        if(n%2 == 1){
            cout<<x<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}