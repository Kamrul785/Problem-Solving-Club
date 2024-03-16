#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    int n = c;
    bool flag = false;
    while(c <= b){
        if(c >= a && c <= b){
            flag = true;
            break;
        }
        c+=n;
    }
    if(flag) cout<<c<<endl;
    else cout<<-1<<endl;
    return 0;
}