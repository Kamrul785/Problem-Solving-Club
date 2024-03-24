#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s,t;
    cin>>s>>t;
    int cnt = 0 ;
    for(int i =0;i<t.size(); i++){
        if(t[i] != s[i]) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}