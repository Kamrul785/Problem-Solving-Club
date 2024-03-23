#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k;
    cin>>n>>k;
    vector<long long>v(n);
    vector<long long>ans;
    for(int i = 0;i<n;i++){
        cin>>v[i];
        if(v[i] != k){
            ans.push_back(v[i]);
        }
    }
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}