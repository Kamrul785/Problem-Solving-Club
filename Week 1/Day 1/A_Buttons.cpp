#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int cnt = 0;
    if(a>=b){
        cnt+=a;
        a-=1;
    }
    else{
        cnt+=b;
        b-=1;
    }
    if(a>=b){
        cnt+=a;
    }
    else{
        cnt+=b;
    }
    cout<<cnt<<'\n';
    return 0;
}