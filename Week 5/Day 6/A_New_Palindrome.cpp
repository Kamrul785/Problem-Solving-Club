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
        string s;
        cin>>s;
        int sz = s.size();
        if(sz <=3){
            cout<<"NO"<<endl;
            continue;
        }
        map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        int cnt = 0;
        for(auto c:mp){
            if(c.second >= 2){
                cnt++;
            }
        }
        if(cnt >= 2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}