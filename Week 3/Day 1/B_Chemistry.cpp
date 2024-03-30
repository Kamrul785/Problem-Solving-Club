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
        string s;
        cin>>s;
        map<int,int>freq;
        int cnt = 0;
        for(auto c:s) freq[c-'a']++;
        for(auto x:freq){
            if(x.second % 2 == 1){
                cnt++;
            }
        }
        if(cnt > k+1){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}