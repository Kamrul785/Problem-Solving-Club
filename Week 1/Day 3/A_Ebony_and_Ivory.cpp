#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    bool flag = false;
    for(int i = 0;i<=c/a; i++){
        for(int j=0; j<=c/b; j++){
            if(a*i + b*j == c){
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    if(flag){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}