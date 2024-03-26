#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,ans;
        cin>>n;
        int a[n];
        map<int,int>freq;
        for(int i =0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
        }
        int del = 0;
        for(auto i : freq){
            del+= (i.second - 1);
        }
        if(del % 2 == 1){
            ans = (n - del) - 1;
        }
        else{
            ans = (n - del);
        }
        cout<<ans<<endl;
    }
    return 0;
}