#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        cin.ignore();
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        map<int,vector<int>>idx;
        for(int i =0;i<n;i++){
            cin>>a[i];
            idx[a[i]].push_back(i);
        }
        while(k--){
            ll x,y;
            cin>>x>>y;
            if(idx[x].empty() || idx[y].empty()){
                no;
                continue;
            }
            if(x == y){
                yes;
                continue;
            }
            if(idx[x].front() < idx[y].back()){
                yes;
            }
            else{
                no;
            }
        }
    }
    return 0;
}