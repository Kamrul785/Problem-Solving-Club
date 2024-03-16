#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,t;
    int bis = 0;
    cin>>a>>b>>t;
    for(int i = a; i<(t+0.5) ;i+=a){
        bis+=b;
    }
    cout<<bis<<endl;
    return 0;
}