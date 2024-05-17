#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b;
    cin >> a >> b;
    if(a == b){
        cout<<"=";
    }
    else if(a == 1) cout<<"<";
    else if(b == 1) cout<<">";
    else if(a+b == 6){
        cout<<"=";
        // if(a == 4) cout<<"=";
        // else cout<<"<";
    }
    else if(a == 3) cout<<">";
    else if(b == 3) cout<<"<";
    else if(a < b){
        cout<<">";
    }
    else cout<<"<";
    return 0;
}