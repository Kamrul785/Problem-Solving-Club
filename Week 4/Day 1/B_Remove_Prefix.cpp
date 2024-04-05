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
        vector<int>a(n),b;
        for(int i =0;i<n;i++) cin>>a[i];
        map<int,int>mp;
        for(int i = n-1;i>=0; i--){
            mp[a[i]]++;
            if(mp[a[i]] > 1){
                break;
            }
            else{
                b.push_back(a[i]);
            }
        }
        int m = b.size();
        cout<<n-m<<endl;
    }
    return 0;
}