#include<bits/stdc++.h>
#define end '\n' 
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k,s;
    cin>>k>>s;
    int cnt = 0;
    for(int i =0;i<=k ;i++){
        for(int j = 0 ;j <= k; j++){
            int x = i,y = j , z = s-i-j;
            if(z >= 0 and z <= k){
                cnt++;
            }
        }
    }
    cout<<cnt<<end;
    return 0;
}