#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int sz = s.size();
    int zero = 4-sz;
    for(int i = 1;i<=zero;i++){
        cout<<0;
    }
    cout<<s;
    return 0;
}