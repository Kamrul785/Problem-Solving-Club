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
        int a,b,c;
        cin>>a>>b>>c;
        int ansa = (a - 1);
        int ansb = (abs(c-b)+(c-1));
        if(ansa < ansb) cout<<"1"<<endl;
        else if(ansa > ansb) cout<<"2"<<endl;
        else cout<<3<<endl;
    }
    return 0;
}